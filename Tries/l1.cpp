#include <iostream>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word) {
        if (word.length() == 0) {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if (root->children[index] != nullptr) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insertWord(string word) {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* node, string word) {
        if (word.length() == 0) {
            return node->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if (node->children[index] != nullptr) {
            child = node->children[index];
        } else {
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word) {
        return searchUtil(root, word);
    }

    bool startsWithUtil(TrieNode* node, string prefix) {
    if (prefix.length() == 0)
        return true;

    int index = prefix[0] - 'A';
    TrieNode* child;

    if (node->children[index] != nullptr) {
        child = node->children[index];
    } else {
        return false;
    }

    return startsWithUtil(child, prefix.substr(1));
}

bool startsWith(string prefix) {
    return startsWithUtil(root, prefix);
}


    bool deleteUtil(TrieNode* node, string word) {
    if (word.length() == 0) {
        if (node->isTerminal) {
            node->isTerminal = false;
            // Check if this node can now be deleted
            for (int i = 0; i < 26; i++) {
                if (node->children[i] != nullptr)
                    return false;  // still has children, can't delete
            }
            return true;  // can delete this node
        }
        return false;  // word doesn't exist
    }

    int index = word[0] - 'A';
    TrieNode* child = node->children[index];

    if (child == nullptr)
        return false;  // word doesn't exist

    bool shouldDeleteChild = deleteUtil(child, word.substr(1));

    if (shouldDeleteChild) {
        delete child;
        node->children[index] = nullptr;

        // Now check if current node is deletable
        if (!node->isTerminal) {
            for (int i = 0; i < 26; i++) {
                if (node->children[i] != nullptr)
                    return false;
            }
            return true;
        }
    }

    return false;
}

void deleteWord(string word) {
    deleteUtil(root, word);
}

};

int main() {
    Trie* t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    t->insertWord("ART");
    cout << "Present or Not (TI): " << t->searchWord("TI") << endl;
    cout << "Present or Not (TIME): " << t->searchWord("TIME") << endl;
    cout << "Present or Not (ARM): " << t->searchWord("ARM") << endl;
    cout << "Present or Not (DO): " << t->searchWord("DO") << endl;
    cout << "Present or Not (DOG): " << t->searchWord("DOG") << endl;

    cout << "Starts with AR: " << t->startsWith("AR") << endl;  // 1
    cout << "Starts with T: " << t->startsWith("T") << endl;    // 1
    cout << "Starts with DO: " << t->startsWith("DO") << endl;  // 0

    t->deleteWord("ART");
    cout << "After deleting ART, search ART: " << t->searchWord("ART") << endl;  // 0
    cout << "Search ARM (should still exist): " << t->searchWord("ARM") << endl;  // 1




    return 0;
}

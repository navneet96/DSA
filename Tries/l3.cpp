//Implement a phone directory
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
        isTerminal = false;
    }
};

class Trie {
    TrieNode* root;

    void insertUtil(TrieNode* node, string word) {
        for (char ch : word) {
            int index = ch - 'a';
            if (node->children[index] == nullptr)
                node->children[index] = new TrieNode(ch);
            node = node->children[index];
        }
        node->isTerminal = true;
    }

    void suggestions(TrieNode* node, string prefix, vector<string>& results) {
        if (node->isTerminal)
            results.push_back(prefix);

        for (int i = 0; i < 26; i++) {
            if (node->children[i] != nullptr) {
                char nextChar = 'a' + i;
                suggestions(node->children[i], prefix + nextChar, results);
            }
        }
    }

    TrieNode* searchPrefix(string prefix) {
        TrieNode* node = root;
        for (char ch : prefix) {
            int index = ch - 'a';
            if (node->children[index] == nullptr)
                return nullptr;
            node = node->children[index];
        }
        return node;
    }

public:
    Trie() {
        root = new TrieNode('\0');
    }

    void insertContact(string contact) {
        transform(contact.begin(), contact.end(), contact.begin(), ::tolower);
        insertUtil(root, contact);
    }

    vector<string> displayContacts(string prefix) {
        transform(prefix.begin(), prefix.end(), prefix.begin(), ::tolower);
        TrieNode* node = searchPrefix(prefix);
        vector<string> results;

        if (node == nullptr)
            return results;  // No matches

        suggestions(node, prefix, results);
        return results;
    }
};

int main() {
    Trie phoneDirectory;
    phoneDirectory.insertContact("Alice");
    phoneDirectory.insertContact("Alina");
    phoneDirectory.insertContact("Bob");
    phoneDirectory.insertContact("Bobby");
    phoneDirectory.insertContact("Albert");

    string search = "Al";
    vector<string> results = phoneDirectory.displayContacts(search);

    if (results.empty()) {
        cout << "No contacts found with prefix \"" << search << "\"." << endl;
    } else {
        cout << "Contacts starting with \"" << search << "\":" << endl;
        for (string name : results)
            cout << "- " << name << endl;
    }

    return 0;
}

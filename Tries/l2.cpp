// Longest Common Prefix
#include <iostream>
#include <vector>
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
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insert(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            int index = ch - 'a';
            if (node->children[index] == nullptr)
                node->children[index] = new TrieNode(ch);
            node = node->children[index];
        }
        node->isTerminal = true;
    }

    string getLongestCommonPrefix() {
        string prefix = "";
        TrieNode* node = root;

        while (true) {
            int count = 0;
            TrieNode* next = nullptr;

            for (int i = 0; i < 26; i++) {
                if (node->children[i] != nullptr) {
                    count++;
                    next = node->children[i];
                }
            }

            if (count == 1 && !node->isTerminal) {
                prefix += next->data;
                node = next;
            } else {
                break;
            }
        }

        return prefix;
    }
};

string longestCommonPrefix(vector<string>& arr, int n) {
    Trie* t = new Trie();

    // Insert all strings into the Trie
    for (int i = 0; i < n; i++) {
        t->insert(arr[i]);
    }

    return t->getLongestCommonPrefix();
}

int main() {
    vector<string> arr = {"coding", "codezen", "codingninja", "coders"};
    int n = arr.size();

    string result = longestCommonPrefix(arr, n);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}

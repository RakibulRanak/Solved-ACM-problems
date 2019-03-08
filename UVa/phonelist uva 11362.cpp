#include <bits/stdc++.h>
using namespace std;
const int ALPHABET_SIZE = 26;
bool once=false;

struct TrieNode
{
    struct TrieNode *children[ALPHABET_SIZE];
    bool isEndOfWord;
    TrieNode()
    {
        isEndOfWord=false;
        for (int i = 0; i < ALPHABET_SIZE; i++)
        {
            children[i] = NULL;
        }
    }
};

void insert(struct TrieNode *root, string key)
{
    struct TrieNode *current= root;
    for (int i = 0; i < key.length(); i++)
    {
        if(current->isEndOfWord)
            once=true;
        int index = key[i] - '0';
        if (current->children[index]==NULL)
            current->children[index] = new TrieNode ();
        current= current->children[index];
    }
    current->isEndOfWord = true;
}


void deleteTrie(TrieNode* current)
{
    for (int i = 0; i < 26; i++)
        if (current->children[i]!=NULL)
            deleteTrie(current->children[i]);

    delete(current);
}
int main()
{
    int n,t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        once=false;

        cin>>n;
        string keys[n];
        for(int i=0; i<n; i++)
        {
            cin>>keys[i];
        }
        sort(keys,keys+n);
        struct TrieNode *root = new TrieNode();
        for (int i = 0; i < n; i++){
            if(!once)
              insert(root, keys[i]);
        }
        if (once)
            printf("NO\n");
        else
            printf("YES\n");
        deleteTrie(root);
    }

    return 0;
}


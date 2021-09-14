#include <iostream>
using namespace std;
 
#define ALPHABET_SIZE  26

struct node
{
    struct node *children[ALPHABET_SIZE];
    bool isEndOfWord;
};
 

struct node *getNode()
{
    struct node *p =  new node;
    p->isEndOfWord = false;
 
    for (int i = 0; i < ALPHABET_SIZE; i++)
        p->children[i] = NULL;
 
    return p;
}
 

void insert(struct node *root, string key)
{
    struct node *t = root;
 
    for (int i = 0; i < key.length(); i++)
    {
        int temp = key[i] - 'a';
        if (!t->children[temp])
            t->children[temp] = getNode();
 
        t = t->children[temp];
    }
 
    t->isEndOfWord = true;
}
 

bool search(struct node *root, string key)
{
    struct node *t = root;
 
    for (int i = 0; i < key.length(); i++)
    {
        int temp = key[i] - 'a';
        if (!t->children[temp])
            return false;
 
        t = t->children[temp];
    }
 
    return (t->isEndOfWord);
}
 
 
int main()
{
    string keys[] = {"the", "a", "there",
                    "answer", "any", "by",
                     "bye", "their" };
    int n = sizeof(keys)/sizeof(keys[0]);
 
    struct node *root = getNode();
 
    // Construct trie
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);
 
    // Search for different keys
    search(root, "the")? cout << "Yes\n" :
                         cout << "No\n";
    search(root, "these")? cout << "Yes\n" :
                           cout << "No\n";
    return 0;
}
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

void insert(Node *root, int key)
{
    Node *t = root;
    Node *r, *p;
    if (root == NULL)
    {
        p = new Node();
        p->data = key;
        p->left = p->right = NULL;
        root = p;
        return;
    }
    while (t != NULL)
    {
        r = t;
        if (t->data > key)
        {
            insert(root->left, key);
        }
        else if (t->data < key)
        {
            insert(root->right, key);
        }
        else
        {
            return;
        }
    }
    p = new Node();
    p->data = key;
    p->left = p->right = NULL;
    return;
    if (key < r->data)
    {
        r->left = p;
    }
    else
    {
        r->right = p;
    }
}

void inorder(Node *p)
{
    while (p)
    {
        inorder(p->left);
        cout<<p->data<<" ";
        inorder(p->right);
    }
    
}

int main()
{
    Node *root = NULL;
    insert(root, 10);
    insert(root, 5);
    insert(root, 20);
    insert(root, 8);
    insert(root, 30);

    inorder(root);

    return 0;
}
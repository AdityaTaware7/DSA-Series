#include <iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    
    node (int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

// Traversal
void inorder(node *root)
{
    if(root == NULL)
    {
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int count(node *root)
{
    int x,y;
    if(root != NULL)
    {
        x = count(root->left);
        y = count(root->right);
        
        return x + y + 1;
    }
    
    return 0;
}


int main() {
    // TREE
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    
    // count number of nodes
    cout<<"Number of nodes present in the tree is ";
    cout<<count(root)<<endl;
    
    // Traversal
    cout<<"Inorder is"<<endl;
    inorder(root);
    cout<<endl;
    

    return 0;
}
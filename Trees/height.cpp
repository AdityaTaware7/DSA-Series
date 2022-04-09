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

int height(node *root)
{
    int x,y;
    if(root != NULL)
    {
        x = height(root->left);
        y = height(root->right);
        if(x > y)
            return x + 1;
        else
            return y + 1;
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
    
    // height  of tree
    cout<<"Height of the tree is ";
    cout<<height(root)<<endl;
    
    // Traversal
    // cout<<"Inorder is"<<endl;
    // inorder(root);
    // cout<<endl;
    

    return 0;
}
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
    if(root == NULL)
        return 0;
    
    int leftSubtree = height(root->left);
    int rightSubtree = height(root->right);
    int ans = max(leftSubtree, rightSubtree) + 1;

    return ans;
}


int main() {
    // TREE
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(5);
    root->left->right = new node(9);
    root->left->left->right = new node(17);
    root->left->left->right->right = new node(11);
    root->right->left = new node(15);
    
    // height  of tree
    cout<<"Height of the tree is ";
    cout<<height(root)<<endl;
    
    // Traversal
    // cout<<"Inorder is"<<endl;
    // inorder(root);
    // cout<<endl;
    

    return 0;
}
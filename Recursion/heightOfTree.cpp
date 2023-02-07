#include <iostream>
using namespace std;

int height(struct Node* root){
        // code here 
        if(root == NULL)
            return 0;
            
        int lh = height(root->left);
        int rh = height(root->right);
        
        return max(lh, rh) + 1;

int main(){
    Node *root; //Root node of the tree
    height(root);
    return 0;
}
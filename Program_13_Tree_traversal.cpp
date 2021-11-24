#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int Key;
    Node *left;
    Node *right;

    Node(int k)
    {
        Key = k;
        left = right = NULL;
    }
};

// Printing a Binary Tree according to Inorder traversal method.
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << (root->Key) << " ";
        inorder(root->right);
    }
}

// Printing a Binary Tree according to Preorder traversal method.
void preorder(Node *root)
{
    if (root != NULL)
    {
        cout << (root->Key) << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Printing a Binary Tree according to Postorder traversal method.
void postorder(Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        inorder(root->right);
        cout << (root->Key) << " ";
    }
}

int main()
{
    cout << "\n ===== WAP to implement all the tree traversal methods using classes.  ===== \n";

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->right = new Node(40);

    cout << "\n\nInorder traversal of binary tree is : \n";
    inorder(root);

    cout << "\n\nPreorder traversal of binary tree is : \n";
    preorder(root);

    cout << "\n\nPostorder traversal of binary tree is : \n";
    postorder(root);

    cout << endl;
    return 0;
}
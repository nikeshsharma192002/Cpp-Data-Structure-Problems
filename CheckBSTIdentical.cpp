#include"bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
};
bool isIdentical(Node* root1 ,Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;

    }
    else{
        bool cond1=root1->data==root2->data;
        bool cond2=isIdentical(root1->left,root2->left);
        bool cond3=isIdentical(root1->right,root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }
        else{
            return false;
        }
        return false;
    }
}
int main(){
    Node* root=new Node(2);
    root->left=new Node(1);
    root->right=new Node(3);

    if(isIdentical(root,root)){
        cout<<"BST's are Identical";
    }
    else{
        cout<<"Not Identical";
    }
    return 0;
}
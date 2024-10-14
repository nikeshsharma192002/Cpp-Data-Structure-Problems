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
void zigzagTraversal(Node* root){
    if(root==NULL){
        return ;
    }
    stack<Node*>currlevel;
    stack<Node*>nextlevel;
    bool leftToright=true;

    currlevel.push(root);
    while(!currlevel.empty()){
        Node* temp=currlevel.top();
        currlevel.pop();

        if(temp){
            cout<<temp->data<<" ";
        
        if(leftToright){
            if(temp->left){
                nextlevel.push(temp->left);
            }
            if(temp->right){
                nextlevel.push(temp->right);
            }
        }
        else{
            if(temp->right){
                nextlevel.push(temp->right);
            }
            if(temp->left){
                nextlevel.push(temp->left);
            }
        }
    }
    if(currlevel.empty()){
        leftToright=!leftToright;
        swap(currlevel,nextlevel);
    }
}
}
int main(){
    Node* root=new Node(12);
    root->left=new Node(9);
    root->right=new Node(15);
    root->left->left=new Node(5);
    root->left->right=new Node(10);

    zigzagTraversal(root);
    cout<<endl;
    return 0;
}
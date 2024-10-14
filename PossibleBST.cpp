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
vector<Node*> ConstructTree(int start,int end){
    vector<Node*>trees;
    if(start>end){
        trees.push_back(NULL);
    
    }
    for(int i=start;i<=end;i++){
        vector<Node*> leftsubtree=ConstructTree(start,i-1);
        vector<Node*> rightsubtree=ConstructTree(i+1,end);
        for(int j=0;j<leftsubtree.size();j++){
            Node* left=leftsubtrees[j];
            for(int k=0;k<rightsubtree.size();k++){
                Node* right=rightsubtree[k];
                Node* root=new Node(i);
                node->left=left;
                node->right=right;
                trees.push_back(Node);
            }
        }
    }
    return trees;
}
void preorder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    vector<Node*> totalTrees=ConstructTree(1,3);
    for(int i=0;i<totalTrees.size();i++){
        cout<<(i+1)<<":";
        preorder(totalTrees[i]);
        cout<<endl;
    }
    return 0;
}
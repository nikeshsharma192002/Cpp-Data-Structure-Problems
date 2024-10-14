#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(node* &head,int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void deleteAtEnd(node* &head,int val){
    if(head!=NULL){
        if(head->next==NULL){
            head = NULL;
        } else {
          node *temp = head;
            temp=temp->next;
            node* lastnode=temp->next;
            temp->next=NULL;
            free(lastnode);
        }
        
    }
    
}
void display(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    deleteAtEnd(head,3);
    display(head);
    return 0;
}
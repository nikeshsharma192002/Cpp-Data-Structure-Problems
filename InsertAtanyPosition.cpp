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
void insertAtPosition(node* &head,int a,int position){
    int val;
    node *n=new node(val);
    n->data=a;
    n->next=NULL;
    if(position<1){
        cout<<"\nPosition should be >=1"<<endl;
    }
    else if(position==1){
        n->next=head;
        head=n;
    }
    else{
        node *temp=head;
        for(int i=1;i<position-1;i++){
            if(temp!=NULL){
            temp=temp->next;
            
        }
        
        }
        if(temp != NULL) {
          n->next = temp->next;
          temp->next = n;  
        } else {
          cout<<"\nThe previous node is null.";
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
    insertAtPosition(head,20,1);
    display(head);
    
    return 0;
}

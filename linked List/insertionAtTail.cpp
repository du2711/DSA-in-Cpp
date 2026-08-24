#include<iostream>
#include<vector>
using namespace std;

class node{
public:
    int data;
    node* address;

    node(int data){
        this->data=data;
        address=NULL;
    }
};

void insertAtHead(node* head,int &val){
    node* newNode = new node(val);
    newNode->address = head;
    head = newNode;
}

void display(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->address;
    }
    cout<<"NULL"<<endl;
}

int main(){ 
    node* head=NULL;
    int val;
    cout<<"Enter element: ";
    cin>>val;
    insertAtHead(head,val);

    display(head);
    return 0;
}
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

void insertionAtTail(node* &list,int &val){
    node* newNode= new node(val);
    newNode->address=NULL;

    node* temp=list;
    if(list==NULL){
        list=newNode;
        return;
    }

    while(temp->address!=NULL){
        temp=temp->address;
    }

    temp->address=newNode;
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

    insertionAtTail(head,val);
    display(head);
    return 0;
}
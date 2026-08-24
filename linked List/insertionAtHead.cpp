#include<iostream>
#include<vector>
using namespace std;

//for traversal a temp pointer ka use hoga bcz head have to be at same jagah prr 

class node{
public:
    int data;
    node* add;

    node(int data){
        this->data=data;
        add=NULL;
    }
};

void insertAtHead(node* &head,int a){
    node* newNode= new node(a);
    newNode->add = head;
    head = newNode;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->add;
    }
    cout<<"NULL"<<endl;
    return;
}

int main(){ 
    node* head = NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,5);
    display(head);

    cout<<endl<<head<<endl;
    cout<<&head<<endl;
    cout<<head->add<<endl;
    insertAtHead(head,69);
    cout<<head->add->add<<endl;

    return 0;
}
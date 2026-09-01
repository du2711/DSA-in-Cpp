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

void insertAtHead(node* &listName,int data){
    node* newNode= new node(data);
    newNode->address=listName;
    listName=newNode;
}

void insertAtTail(node* &list,int data){
    node* newNode = new node(data);
    newNode->address=NULL;

    if(list==NULL){
        list=newNode;
        return;
    }

    node* temp=list;
    while(temp->address!=NULL){
        temp=temp->address;
    }

    temp->address=newNode;
}

void insertAtk(node* &list,int data,int kpos){
    node* newNode = new node(data);
    if(kpos==0){
        insertAtHead(list,data);
        return;
    }

    node* temp=list;
    int count=0;

    while(count!=kpos-1){
        temp=temp->address;
        count++;
    }

    newNode->address=temp->address;
    temp->address=newNode;
}

void display(node* list){
    node* temp=list;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->address;
    }
    cout<<"Null"<<endl;
}
int main(){ 
    // int n;
    // cout<<"Enter numbers  of element:" ;
    // cin>>n;

    node* list=NULL;

    // for(int i=0;i<n;i++){
    //     int d;
    //     cout<<"Enter element on "<<i+1<<": ";
    //     cin>>d;
    //     insertAtHead(list,d);
    // }

    insertAtHead(list,9);
    insertAtHead(list,4);
    insertAtHead(list,5);
    insertAtHead(list,8);
    insertAtHead(list,2);
    insertAtTail(list,3);
    insertAtTail(list,30);
    insertAtTail(list,13);
    insertAtTail(list,12);

    insertAtk(list,69,5);

    display(list);
    return 0;
}
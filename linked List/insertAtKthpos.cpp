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

void insertAtHead(node* &list,int val){
    node* newNode=new node(val);
    newNode->address=list;
    list=newNode;
}

void insertAtKpos(int val,node* &list,int pos){
    if(pos==0){
        insertAtHead(list,val);
        return;
    }

    node* newNode = new node(val);
    node* temp=list;

    int currPos=0;
    while(currPos!=pos-1){
        temp=temp->address;
        currPos++;
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
    cout<<"NULL"<<endl;
}

int main(){ 
    node* list=NULL;
    insertAtHead(list,2);
    display(list);
    insertAtHead(list,45);
    display(list);
    insertAtKpos(69,list,1);
    display(list);
    return 0;
}
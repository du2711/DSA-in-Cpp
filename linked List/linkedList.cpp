#include<iostream>
using namespace std;

class node{
public:
    int val;
    node* next;

    node(int val){
        this->val=val;
        next=NULL;
    }

    void print(){
        
    }
};

int main(){
    node* a= new node(520);
    node* b= new node(550);
    node* c= new node(600);
    node* d= new node(2);
    node* e= new node(69);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL;



    return 0;
}
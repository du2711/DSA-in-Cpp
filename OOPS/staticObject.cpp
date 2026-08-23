#include<iostream>
#include<vector>
using namespace std;

class A{
public: 
    int x;

    void incx(){
        x=x+2;
    }
};

int main(){ 
    A obj;
    A obj2;

    obj.x=100;
    obj2.x=200;

    cout<<obj.x<<endl;
    obj.incx();
    cout<<obj.x<<endl;

    return 0;
}
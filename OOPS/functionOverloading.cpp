#include<iostream>
#include<vector>
using namespace std;

class loading{
public:
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    void sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
    void sum(string a,string b){
        cout<<a+b<<endl;
    }
};

int main(){ 
    loading a;
    a.sum(4,5);
    a.sum(4,5,6);

    a.sum("ram"," raghav");
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

class cricketer{
public:
    string name;
    int runs;
    float avg;

    cricketer(){}
    cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
};

int main(){ 
    cricketer c1("Virat Kohli",25000,55.2);
    cricketer c2("Rohit Sharma",18000,47.8);

    // int x=9;
    // cout<<x<<endl;
    // int* pr=&x;
    // cout<<(*pr=3)<<endl;
    // cout<<(x==*pr);

    return 0;
}
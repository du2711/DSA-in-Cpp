#include<iostream>
#include<vector>
using namespace std;

class cricketer{
public:
    string name;
    int runs;
    float avg;

    cricketer(){

    }

    cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
};

void change(cricketer* c){
    c->avg=68.9;        //(*c).avg=77.2;
}

int main(){ 
    cricketer c1("Virat Kohli",25000,55.2);
    cricketer c2("Rohit Sharma",18000,47.8);

    cout<<c1.avg<<endl;
    change(&c1);
    cout<<c1.avg<<endl;

    cricketer* p1=&c1;
    cout<<p1->runs<<endl;

    // (*p1).avg=77.5;
    // cout<<c1.avg<<endl;

    return 0;
}
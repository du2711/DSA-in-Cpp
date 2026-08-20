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
    cricketer *c2=new cricketer("Rohit Sharma",18000,47.8);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;

    return 0;
}
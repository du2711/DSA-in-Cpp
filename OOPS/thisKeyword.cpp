#include<iostream>
#include<vector>
using namespace std;

class person{
public:
    string name;
    int runs;
    float avg;

    person(){
        
    }

    person(string name,int runs,float avg){
        this->name = name;
        this->runs=runs;
        this->avg=avg;
    }

    void print(int runs){
        cout<<this->name<<" "<<this->runs<<endl;
        cout<<runs<<endl;
    }

    int matches(){
        return runs/avg;
    }
};

int main(){ 
    person c1("virat kohli",25000,55.2);
    person c2("rohit sharma",15000,47.8);

    // cout<<c1.name<<" "<<c1.runs<<endl;
    // cout<<c2.name<<" "<<c2.runs<<endl;

    c1.print(5);
    c2.print(99999);

    cout<<c1.matches();
    return 0;
}
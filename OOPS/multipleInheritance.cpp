#include<iostream>
#include<vector>
using namespace std;

class cricketer{
public:
    int runs;
    int wickets;
    float avg;
};

class engineer{
public:
    int experience;
    string domain;
};

class phodu : public engineer , public cricketer{        //multiple inheritance
public:
    string name;

    void print(){
        cout<<name<<" "<<runs<<" "<<wickets<<" "<<avg<<" "<<experience<<" "<<domain<<endl;
    }
};

int main(){ 
    phodu p;
    
    p.name="Saourav Netravalkar";
    p.runs=3000;
    p.wickets=150;
    p.avg=43.7;
    p.experience=5;
    p.domain="Software Engineer";

    p.print();

    return 0;
}
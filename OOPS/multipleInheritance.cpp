#include<iostream>
#include<vector>
using namespace std;

class cricketer{
public:
    int runs;
    int wickets;
    int avg;
};

class engineer{
    int experience;
    string domain;
};

class phodu : public engineer,cricketer{        //multiple inheritance
public:
    string name;
};

int main(){ 
    phodu p;
    p.name="Saourav Netravalkar";
    return 0;
}
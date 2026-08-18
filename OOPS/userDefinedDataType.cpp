#include<iostream>
#include<vector>
using namespace std;

class Student{ //new data type
public:
    string name;
    int rno;
    float gpa;
};

int main(){ 
    Student x;
    x.name="Raman";
    x.rno=76;
    x.gpa=8.2;

    cout<<x.name;

    return 0;
}
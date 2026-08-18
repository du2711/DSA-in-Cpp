#include<iostream>
#include<vector>
using namespace std;

class student{
public:
    int rno;
    string name;

    student(){}

    student(int rno,string name,float marks){
        this->rno=rno;
        this->name=name;
        this->marks=marks;
    }

    float getmarks(){
        return marks;
    }

    void setmarks(float m){
        marks=m;
    }

private:
    float marks;
};

int main(){ 
    student s1;
    s1.rno=23;
    s1.name="hariom";

    student s2(76,"jussi",69.69);
    return 0;
}
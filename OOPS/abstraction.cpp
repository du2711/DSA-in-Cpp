#include<iostream>
#include<vector>
using namespace std;

class shape{        //abstract class
public:
    virtual void draw()=0;      //pure virtual class
};

class circle : public shape{
    public:
    void draw(){
        cout<<"Drawing a circle";
    }
};

int main(){ 
    circle c;
    c.draw();
    return 0;
}
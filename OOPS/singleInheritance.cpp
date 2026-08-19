#include<iostream>
#include<vector>
using namespace std;

class scooty{       //parent class
public:
    int topSpeed;
    float mileage;
private:
    int bootSpace;
};

class bike : public scooty{        //child class/ derived class
public:
    int gears;
};

int main(){ 
    bike b;
    b.topSpeed=180;
    b.mileage=12.5;
    b.gears=6;

    cout<<"Topspeed: "<<b.topSpeed<<endl;
    return 0;
}
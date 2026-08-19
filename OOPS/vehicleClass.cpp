#include<iostream>
#include<vector>
using namespace std;

class vehicle{
public:
    int topSpeed;
    float mileage;
    string fuel;
};

class fourwheeler : public vehicle{
public:
    
};

class twowheeler : public vehicle {       //child class/ derived class
public:
    bool sunroof;
};

class bike : public twowheeler {       //child class/ derived class
public:
    
};

class scooty : public twowheeler {       //child class/ derived class
public:
    
};

int main(){ 
    
    return 0;
}
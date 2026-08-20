#include<iostream>
#include<vector>
using namespace std;

class scooty{
public:
    int topSpeed;
    float mileage;

    virtual void sound(){
        cout<<"Vroom Vroom";
    }
};

class bike : public scooty{
public:
    int gears;
    void sound(){
        cout<<"Dhroom Dhroom";
    }
};

class superBike : public scooty{
public:
    int gears;
};

int main(){ 
    // bike *b=new bike();
    // b->sound();
    // b->gears=5;
    // cout<<b->gears;

    // scooty s;
    // s.sound();

    scooty* b=new bike();
    b->sound();

    scooty* c=new superBike();
    c->sound();

    vector<scooty> s;
    return 0;
}
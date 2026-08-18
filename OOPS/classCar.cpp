#include<iostream>
#include<vector>
using namespace std;

class car{
public:
    string name;
    int price;
    int seats;
    string type;
};

void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<" "<<endl;
}

int main(){ 
    car c1;
    c1.name="Honda City";
    c1.price=1500000;
    c1.seats=5;
    c1.type="Sedan";

    car c2;
    c2.name="Suzuki Swift";
    c2.price=600000;
    c2.seats=5;
    c2.type="hatchback";

    car c3;
    c3.name="Toyota Fortuner";
    c3.price=3600000;
    c3.seats=8;
    c3.type="SUV";

    print(c1);
    print(c2);
    print(c3);

    return 0;
}
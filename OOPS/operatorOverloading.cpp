#include<iostream>
#include<vector>
using namespace std;

int hcf(int a,int b){
    while(b!=0){
        int rem = a%b;
        a=b;
        b=rem;
    }
    return a;
}

class fraction{
public:
    int num;
    int den;
    fraction(int num,int den){
        this->den=den;
        this->num=num;
    }
    void display(){
        cout<<num<<"/"<<den<<endl;
    }

    fraction add(fraction f){
        int newnum=this->num*f.den + f.num*this->den;
        int newden=this->den*f.den;
        fraction ans(newnum,newden);
        return ans;
    }
    fraction operator+(fraction f){
        int newnum=this->num*f.den + f.num*this->den;
        int newden=this->den*f.den;
        fraction ans(newnum,newden);
        return ans;
    }
    fraction operator*(fraction f){
        int newnum = this->num*f.num;
        int newden = this->den*f.den;
        fraction ans(newnum,newden);
        return ans;
    }
    fraction operator/(fraction f){
        swap(f.num,f.den);
        int newnum = this->num*f.num;
        int newden = this->den*f.den;
        fraction ans(newnum,newden);
        return ans;
    }
    fraction simplyfy(){
        int a=hcf(num,den);
        int newnum=num/a;
        int newden=den/a;
        fraction ans(newnum,newden);
        return ans;
    }
};

int main(){ 
    fraction f1(1,2);
    fraction f2(3,4);
    f1.display();
    f2.display();

    fraction f3 = f1.add(f2);
    f3.display();
    fraction f4=f1+f2;
    f4.display();

    f4=f4.simplyfy();
    f4.display();
    return 0;
}
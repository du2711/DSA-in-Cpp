#include<iostream>
#include<vector>
using namespace std;
// class rec{
// public:
//     int l;
//     int b;

//     rec(){                 //default
//         l=0;
//         b=0;
//     }

//     rec(int x , int y){      // parametrised
//         l=x;
//         b=y;
//     }

//     rec(rec &r){         //copy
//         l=r.l;
//         b=r.b;
//     }

//     ~rec(){
//         cout<<"Destructer";
//     }
// };

class student{
public:
    string name;
    int rno;
    float gpa;

    student(){           //default

    }

    student(string s,int r,float g){     //parametrised
        name=s;
        rno=r;
        gpa=g;
    }

    student(string s,int r){     //parametrised
        name=s;
        rno=r;
    }
};

void change(student &c){
    c.name="mayaa";
}

int main(){ 
    // rec *r1=new rec(6,7);
    // cout<<r1->l<<" "<<r1->b;
    // cout<<endl;
    // delete r1;

    // rec r2(8,9);
    // cout<<r2.l<<" "<<r2.b;
    // cout<<endl;

    // rec r3 =r2;
    // cout<<r3.l<<" "<<r3.b;
    // cout<<endl;

    student s1("raghav ram",76,8.2);

    cout<<s1.rno<<" "<<s1.name<<" "<<s1.gpa<<endl;
    change(s1);
    cout<<s1.rno<<" "<<s1.name<<" "<<s1.gpa<<endl;

    student x;
    x.name="Raman";
    x.rno=46;
    x.gpa=9.6;

    cout<<x.rno<<" "<<x.name<<" "<<x.gpa<<endl;

    student s3("raghu",76);
    s3.gpa=6.9;

    cout<<s3.rno<<" "<<s3.name<<" "<<s3.gpa<<endl;
    return 0;
}
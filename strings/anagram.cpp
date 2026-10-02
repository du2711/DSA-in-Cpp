#include<iostream>
#include<algorithm>
using namespace std;

int main(){ 
    string s1,s2;
    cout<<"Enter string 1: ";
    cin>>s1;

    cout<<"Enter string 2: ";
    cin>>s2;

    if(sizeof(s1)!=sizeof(s2)) return false;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    cout<<(s1==s2);
    return 0;
}
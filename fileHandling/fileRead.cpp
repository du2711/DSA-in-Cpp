#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main(){ 
    ifstream infile;
    infile.open("file.txt");

    char c;
    c=infile.get();

    while(!infile.eof()){
        cout<<c;
        c=infile.get();
    }

    infile.close();
    return 0;
}
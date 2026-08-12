#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main(){ 
    ofstream outfile;
    outfile.open("file.txt");

    outfile<<"Next to printed"<<endl;
    outfile<<"hello";

    outfile.close();

    ifstream infile;
    infile.open("file.txt");

    string line;
    while(getline(infile,line)){
        cout<<line;
    }

    infile.close();
    return 0;
}
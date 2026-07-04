#include<iostream>
#include<vector>
using namespace std;

void comb(string &str,int idx,string result,vector<string> &li,vector<string> &v){
    if(idx == str.size()){
        li.push_back(result);
        return;
    }
    int digit = str[idx] - '0';
    if(digit <= 1){
        comb(str,idx+1,result,li,v);
    }
    for(int j=0; j<v[digit].size(); j++){
        comb(str,idx+1,result+v[digit][j],li,v);
    }
    return;
}

int main(){ 
    vector<string> v{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


    string str;
    cout<<"Enter your string: ";getline(cin,str);

    vector<string> li;comb(str,0,"",li,v);

    for(string ele : li){
        cout<<ele<<" ";
    }

    return 0;
}
// 
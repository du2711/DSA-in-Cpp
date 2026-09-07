#include<iostream>
#include<vector>
using namespace std;

    void subseq(string &arr,int idx,string sum,vector<string> &result){
        if(idx==arr.size()){
            result.push_back(sum);
            return;
        }
        subseq(arr,idx+1,sum+arr[idx],result);
        subseq(arr,idx+1,sum,result);
    }

int main(){ 
    string str;
    cout<<"Enter string: ";
    getline(cin,str);

    vector<string> res;
    subseq(str,0,"",res);

    for (string s : res) {
        cout<<endl<<s;
    }
    return 0;
}
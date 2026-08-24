#include<iostream>
#include<vector>
using namespace std;

bool present(string &a,string &b){
    int freq[26]={0};
    for(char ch:a){
        freq[ch-'a']++;
    }
    for(char ch:b){
        if(freq[ch-'a']>0) return true;
    }

    return false;
}

int maxSum(vector<string> str){
    int ans = 0;
    for(int i=0;i<str.size();i++){
        for(int j=i+1;j<str.size();j++){
            if(!present(str[i],str[j])){
                ans=max(ans,(int)str[i].size()+(int)str[j].size());
            }
        }
    }
    return ans;
}

int main(){ 
    int n;
    cout<<"Enter string: ";
    cin>>n;

    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    int ans= maxSum(str);

    cout<<"Output: "<<ans;
    return 0;
}
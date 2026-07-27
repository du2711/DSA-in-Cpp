#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target) return i;
    }
    return -1;
}

int main(){ 
    vector<int> arr;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
        if(cin.peek()=='\n') break;
    }

    int target;
    cout<<"Target: ";
    cin>>target;
    int found=linearSearch(arr,target);

    cout<<found;
    return 0;
}
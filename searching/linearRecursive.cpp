#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &arr, int target,int i){
    if(i==arr.size()) return -1;
    if(arr[i]==target) return i;

    return linearSearch(arr,target,i+1);
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

    int found=linearSearch(arr,target,0);

    cout<<found;
    return 0;
}
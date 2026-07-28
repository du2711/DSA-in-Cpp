#include<iostream>
#include<vector>
using namespace std;

int binary(const vector<int> &arr,int target,int low,int high){
    if(low>high) return -1;
    int mid=low+(high-low)/2;
    if(arr[mid]==target) return mid;

    if(arr[mid]>target) return binary(arr,target,low,mid-1);
    else return binary(arr,target,mid+1,high);
}

int binarySearch(const vector<int> &arr,int target){
    return binary(arr,target,0,arr.size()-1);
}

int main(){ 
    int n;
    cin>>n;

    vector<int> arr;

    while(n--){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }

    int t;
    cin>>t;
    int f=binarySearch(arr,t);
    cout<<f;
    return 0;
}
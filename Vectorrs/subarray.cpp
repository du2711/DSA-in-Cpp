#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){ 
    vector<int> arr;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
        if(cin.peek()=='\n') break;
    }

    int n=arr.size();
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0) currSum=0;
    }
    cout<<"= "<<maxSum;
    return 0;
}
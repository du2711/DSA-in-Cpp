#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(const vector<int> &arr,int target){
    int low=0;
    int high=arr.size()-1;

    while(low<=high){
        int mid=(low+(high-low))/2;

        if(target==arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            high=mid-1;
        }
        else if(target>arr[mid]){
            low=mid+1;
        }
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
    int f=binarySearch(arr,target);
    cout<<f;
    return 0;
}
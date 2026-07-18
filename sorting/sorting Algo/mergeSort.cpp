#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int st,int mid,int end){
    vector<int> temp;
    int i=st;
    int j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++){
        arr[k+st]=temp[k];
    }
}

void seperationAndMerger(vector<int> &arr,int st,int end){

    if(st>=end) return;
    int mid=st+(end-st)/2;

    seperationAndMerger(arr,st,mid);
    seperationAndMerger(arr,mid+1,end);
    merge(arr,st,mid,end);
}

vector<int> mergeSort(vector<int> &ar){
    seperationAndMerger(ar,0,ar.size()-1);
    return ar;
}

int main(){ 
    vector<int> arr;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
        if(cin.peek()=='\n') break;
    }

    mergeSort(arr);

    for(int e:arr){
        cout<<e<<" ";
    }

    return 0;
}
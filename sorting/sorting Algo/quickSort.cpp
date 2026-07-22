#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b){
    int temp=a;a=b;b=temp;
}

int partition(vector<int> &arr,int start, int end){
    int idx=start-1;
    int pivot=arr[end];
    
    for(int i=start;i<end;i++){
        if(arr[i]<=pivot){
            idx++;
            swap(arr[i],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}

void quick(vector<int> &arr,int start, int end){
    if(start>=end) return;

    int pivIdx=partition(arr,start,end);

    quick(arr,start,pivIdx-1);
    quick(arr,pivIdx+1,end);
}

vector<int> quickSort(vector<int> &arr){
    quick(arr,0,arr.size()-1);
    return arr;
}

int main(){ 
    int ele;
    vector<int> arr;
    while(cin>>ele){
        arr.push_back(ele);
        if(cin.peek()=='\n') break;
    }

    quickSort(arr);
    for(int e:arr){
        cout<<e<<" ";
    }

    return 0;
}
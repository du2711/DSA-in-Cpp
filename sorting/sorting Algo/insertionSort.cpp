#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr){
    for(int i=1;i<arr.size();i++){
        int current = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

int main() { 
    vector<int> arr;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
        if(cin.peek()=='\n') break;
    }

    insertionSort(arr);

    for(int ele:arr){
        cout<<ele<<" ";
    }
    return 0;
}
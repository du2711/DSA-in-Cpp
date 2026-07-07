#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b){
    int temp=a;a=b;b=temp;
}

vector<int> bubbleSort(vector<int> &arr){
    for(int i=0;i<arr.size()-1;i++){
        bool flag=false;
        for(int j=0;j<arr.size()-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag=true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!flag) break;
    }
    return arr;
}

int main(){ 
    vector<int> arr;
    int ele;
    while(cin.peek()!='\n' && cin>>ele){
        arr.push_back(ele);
    }

    bubbleSort(arr);

    for(int ele: arr){
        cout<<ele<<" ";
    }

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b){
    int temp=a;a=b;b=temp;
}

vector<int> sort0(vector<int> &arr){
    int i=0;
    for(int j=0;j<arr.size();j++){
        if(arr[j]!=0) {
            swap(arr[i],arr[j]);
            i++;
        }
    }
    return arr;
}

int main(){ 
    vector<int> arr;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
        if(cin.peek() == '\n') break;
    }

    sort0(arr);

    for(int e:arr){
        cout<<e<<" ";
    }
    return 0;
}
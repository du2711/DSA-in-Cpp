#include<iostream>
#include<vector>
using namespace std;

void swap(int &a,int &b){
    int temp=a;a=b;b=temp;
}

vector<int> selectionSort(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        int min=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[min]) min=j;
        }
        if(min!=i) swap(arr[i],arr[min]);
    }
}

int main(){ 
    vector<int> arr;
    int ele;
    while(cin.peek()!='\n' && cin>>ele){
        arr.push_back(ele);
    }

    selectionSort(arr);

    for(int ele:arr){
        cout<<ele<<" ";
    }

    return 0;
}
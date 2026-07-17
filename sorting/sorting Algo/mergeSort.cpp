#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeSort(vector<int> &arr){

}

int main(){ 
    vector<int> arr;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
        if(cin.peek()=='\n') break;
    }

    //mergeSort(arr);

    for(int e:arr){
        cout<<e<<" ";
    }

    return 0;
}
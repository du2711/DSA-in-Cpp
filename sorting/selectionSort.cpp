#include<iostream>
#include<vector>
using namespace std;

vector<int> selectionSort(vector<int> &arr){

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
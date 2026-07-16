#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

// using selection sort

vector<string> sortL(vector<string> &arr){
    for(int i=0;i<arr.size()-1;i++){
        int min=i;
        for(int j=i+1;j<arr.size();j++){
            if( arr[min]>arr[j]){
                min=j;
            }
        }
        if(i!=min){
            swap(arr[i],arr[min]);
        }
    }
    return arr;
}

int main() { 

    // vector<int> arr;
    // int ele;
    // while(cin>>ele){
    //     arr.push_back(ele);
    //     if(cin.peek()=='\n')  break;
    // }

    vector<string> fruit={"papaya","lime","watermelon","apple","mango","kiwi"};

    sortL(fruit);

    for(string ele:fruit){
        cout<<ele<<" ";
    }

    return 0;
}
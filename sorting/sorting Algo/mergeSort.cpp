#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int l,int mid,int r){
    int an =mid-l+1;
    int bn = r-mid;

    vector<int> a(an);
    vector<int> b(bn);

    for(int i=0;i<an;i++){
        a[i]=arr[l+i];
    }
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];
    }

    int i=0,j=0,k=l;

    while(i<an && j<bn){
        if(a[i]<b[j]) arr[k++]=a[i++];
        else arr[k++]=b[j++];
    }

    while(i<an) arr[k++]=a[i++];
    while(j<bn) arr[k++]=b[j++];
}

void mergesort(vector<int> &arr,int l,int r){
    if(l>=r) return;

    int mid=(l+r)/2;
    mergesort(arr,0,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
}

vector<int> mergeSort(vector<int> &ar){
    mergesort(ar,0,ar.size()-1);
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
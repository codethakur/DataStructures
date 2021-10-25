#include<bits/stdc++.h>
using namespace std;
vector<int>v;
void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int ar1[n1];
    int ar2[n2];

    for(int i=0; i<n1; i++){
    ar1[i]=arr[l+i];
    }

    for(int i=0; i<n2; i++){
    ar2[i]=arr[i+mid+1];
    }

    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(ar1[i]<=ar2[j]){
            arr[k]=ar1[i];
            i++;
        }
        else{
            arr[k]=ar2[j];
                j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=ar1[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k]=ar2[j];
        k++;
        j++;
    }
}

void mergesort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main() {
    int n;
    cout<<"Enter Size:"<<"\n";
    cin>>n;
    int arr[n];
    cout<<"Inter Array Elements:\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"output"<<endl;
    for(int i=0; i<n; i++)
    cout<<arr[i]<<endl;
    return 0;
}
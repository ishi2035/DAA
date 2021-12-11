#include<iostream>
using namespace std;
int selectionSort(int *arr,int s,int n){
    for(int i=0;i<n-1;i++){
        int mi=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mi]){
                mi=j;
            }
            swap(arr[i],arr[mi]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
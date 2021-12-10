#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr = new int[n];
        for(int i=0; i<n;i++){
            cin>>arr[i];
        }
        int i,j,k,sum;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                     sum = arr[i]+arr[j];
                     if(sum==arr[k]){
                     cout<<arr[i]<<" + "<<arr[j]<<" = "<<arr[k];
                     exit(0);
                     }
                     if(sum<arr[k]){
                         break;
                     }
                }
            }    

        }
        cout<<"no match found";

    }
}
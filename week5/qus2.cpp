#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    bool ans;
    for (int i = 0; i < n-1; i++)
    {  
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
                ans=true;                    
            }
        }
    }
    if(!ans){
        cout<<"no such pair exist";
    }   
}
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int *arr = new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int key;
        cin>>key;
        int count=0;
        sort(arr , arr+n);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+key==arr[j]){
                    count++;
                }
                if(arr[i]+key<arr[j])
                    break;
            }
        }
        cout<<"count = "<<count;
    }
}
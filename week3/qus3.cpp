#include<iostream>
#include<algorithm>
using namespace std;
bool finddublicate(int *arr,int n){
    sort(arr, arr+n);
    for (int i = 1 ; i < n; i++)
    {
        /* code */
        if(arr[i]==arr[i+1])
            return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
   bool ans= finddublicate(arr,n);
    if(ans)
        cout<<"yes\n";
    else 
        cout<<"No\n";
}   
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int *s= new int[m];
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    int i=0,j=0;
    bool ans;
    while(i<n&&j<m){
        if(a[i]==s[j]){
            cout<<a[i]<<" ";
            i++;
            j++;
            ans = true;
        }
        else if(a[i]>s[j]){
            j++;
        }
        else
            i++;
    }
    if(!ans){
      cout<<" no match found";
    }
}
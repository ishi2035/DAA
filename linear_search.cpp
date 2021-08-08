#include<iostream>
using namespace std;
int linear_sort(int key, int arr[], int n){
    for(int i=0;i<n;i++){
        if(key==arr[i])
            return i;
    }
    return -1;

}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,c;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
           {cin>>arr[i];}
        int key;
        cin>>key;
        c= linear_sort(key,arr,n);
        if(c!=-1)
           { cout<<"present"<<endl<<c+1;}
        else
           {cout<<"not present"<<endl;}
        t--;
    }

    return 0;
}
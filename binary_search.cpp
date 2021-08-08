#include<iostream>
using namespace std;
int Binary_search(int key,int  arr[],int n){
    int i=0,j=n,c=0;
    while(i<=j)
    {
            int mid = (i+j)/2;
            c++;
            if(arr[mid]==key)
                return c;

            else if(arr[mid]>key)
                j = mid-1;
            else 
                i = mid+1;
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
        c= Binary_search(key,arr,n);
        if(c!=-1)
           { cout<<"present"<<endl<<c;}
        else
           {cout<<"not present"<<endl;}
        t--;
    }
}

  
#include <iostream>
using namespace std;

int main(){
    int n;                                                  //time complexity = O(n)(best) O(n^2)worst
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
       {cin>>arr[i];}
        for (int i = 1; i < n; i++)
        {
            int j=i-1, c = arr[i];
            while(arr[j]>c && j>=0)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]= c;
        }    
       
        for(int i=0;i<n;i++)
           {cout<<arr[i]<<"  ";}

    return 0;
}          
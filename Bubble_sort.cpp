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
            for(int j =0;j<n-i;j++){
                 if(arr[j+1]<arr[j])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        
         for(int i=0;i<n;i++)
           {cout<<arr[i]<<"  ";}

    return 0;
}           
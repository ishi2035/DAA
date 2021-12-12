#include<iostream>
#include<queue>
using namespace std;
void bfs(int **arr, int v, int a){
    int *visit=new int[v];  //{0}
    for(int i=0; i<v;i++){
        visit[i]=0;
    }
    visit[a]=1;
                cout<<a<<" ";
    queue<int>q;
    q.push(a);
    while(!q.empty()){
        int u = q.front();
        for(int j=0;j<v;j++)
        {
            if(arr[u][j]==1&&visit[j]==0){
                visit[j]=1;
                q.push(j);
                cout<<" "<<j<<" ";
            }
        }
    }

}
int main(){
    int v;
    cin>>v;
    int **arr= new int*[v];
    for(int i=0;i<v;i++)
        arr[i] = new int[v];
    cout<<"adjacentcy matrix: "<<endl;
    for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                cin>>arr[i][j];
            }
    }
    bfs(arr,v,1);
    
}
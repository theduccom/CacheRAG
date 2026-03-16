#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n;
    while(cin>>n,n){
        int graph[n+1][n+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++){
                graph[i][j]=0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>graph[i][j];
                graph[i][n] += graph[i][j];
            }
            for(int j=0;j<n+1;j++){
                graph[n][j] += graph[i][j];
            }
        }
        for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++){
                printf("%5d",graph[i][j]);
            }
            cout<<endl;
        }
    }
    return 0;
}
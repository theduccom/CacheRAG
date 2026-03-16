#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    int W,N;
    int cnt=1;
    while(true){
        cin>>W;
        if(W==0)break;
        cin>>N;
        int treasure[N+1][2];
        for(int i=1;i<N+1;i++)
            scanf("%d,%d",&treasure[i][0],&treasure[i][1]);
        
        int table[N+1][W+1];
        for(int i=0;i<N+1;i++)
            for(int j=0;j<W+1;j++)
                table[i][j]=0;
        
        for(int i=1;i<N+1;i++){
            for(int j=1;j<W+1;j++){
                if(j<treasure[i][1]){table[i][j] = table[i-1][j];continue;}
                int new_value = table[i-1][j-treasure[i][1]] + treasure[i][0];
                table[i][j] = max(new_value,table[i-1][j]);
            }
        }

        int m=0,w=0;
        for(int i=0;i<W+1;i++){
            if(table[N][i]>m){m=table[N][i];w=i;}
        }
        cout<<"Case "<<cnt<<":"<<endl;
        cout<<m<<endl<<w<<endl;
        cnt++;
    }
    return 0;
}

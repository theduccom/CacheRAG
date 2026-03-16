#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    int N;
    string fie[8];
    cin>>N;
    for(int i=0;i<N;i++){
        getchar();getchar();
        for(int j=0;j<8;j++)cin>>fie[j];
        int X,Y;
        cin>>X>>Y;
        queue<int> QX,QY;
        QX.push(X);QY.push(Y);
        while(!QX.empty()){
            Y=QY.front(),X=QX.front();
            QY.pop();QX.pop();
            if(Y<=0||9<=Y||X<=0||9<=X)continue;
            if(fie[Y-1][X-1]=='1'){
                fie[Y-1][X-1]='0';
                for(int j=-3;j<=3;j++){
                    for(int k=-3;k<=3;k++){
                        if((j==0||k==0)&&(!(j==0&&k==0))){
                            QY.push(Y+j);QX.push(X+k);
                        }
                    }
                }
            }
        }
        printf("Data %d:\n",i+1);
        for(int j=0;j<8;j++)cout<<fie[j]<<endl;;
    }
    return 0;
}
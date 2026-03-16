#include<bits/stdc++.h>
using namespace std;
int status[102][102];
char field[102][102];
void serch(int h,int w)
{
    if(status[h][w]==1)cout<<"LOOP"<<endl;
    else{
        status[h][w]++;
        if(field[h][w]=='>')serch(h,w+1);
        else if(field[h][w]=='<')serch(h,w-1);
        else if(field[h][w]=='v')serch(h+1,w);
        else if(field[h][w]=='^')serch(h-1,w);
        else cout<<w<<" "<<h<<endl;
    }
}
int main()
{
    int H,W;
    while(cin>>H>>W&&H!=0){
        for(int i=0;i<H;i++){
                for(int j=0;j<W;j++){
                        status[i][j]=0;
                        cin>>field[i][j];
                }
        }
        serch(0,0);
    }
}
#include<bits/stdc++.h>
using namespace std;
char str[9][9];
int mx[4]={1,0,-1,0},my[4]={0,1,0,-1},moving[4];
void serch(int mo,int y,int x)
{
    for(int i=0;i<4;i++){
            if(str[my[i]+y][x+mx[i]]=='1'&&my[i]+y>=0&&my[i]+y<9&&mx[i]+x>=0&&mx[i]+x<9){
                str[my[i]+y][x+mx[i]]='0';
                moving[mo]=i;
                serch(mo+1,y+my[i],x+mx[i]);
                break;
            }

    }
}
int main()
{
    int co=0;
    while(cin>>str[0]){
        for(int i=1;i<8;i++)cin>>str[i];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(str[i][j]=='1'&&co==1)co++;
                else if(str[i][j]=='1'&&co==0){
                    str[i][j]='0';
                    serch(0,i,j);
                    co++;
                }

            }
        }
        if(moving[0]==0&&co!=2){
            if(moving[1]==1){
                if(moving[2]==2)cout<<"A"<<endl;
                else cout<<"E"<<endl;
            }
            else cout<<"C"<<endl;
        }
        else if(moving[0]==1&&co!=2){
            if(moving[1]==0)cout<<"F"<<endl;
            else if(moving[1]==1)cout<<"B"<<endl;
            else if(moving[1]==2)cout<<"D"<<endl;
        }
        else cout<<"G"<<endl;
        co=0;
    }
}
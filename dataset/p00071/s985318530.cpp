#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string str[8];
        for(int j=0;j<8;j++)cin>>str[j];
        int x,y;
        cin>>x>>y;
        str[y-1][x-1]='2';
        while(1){
            int co=0;
            for(int j=0;j<8;j++){
                for(int k=0;k<8;k++){
                    if(str[j][k]=='2'){
                        co=1;
                        str[j][k]='0';
                        for(int l=1;l<=3;l++){
                           if(j-l>-1&&str[j-l][k]=='1')str[j-l][k]='2';
                           if(j+l<8&&str[j+l][k]=='1')str[j+l][k]='2';
                           if(k-l>-1&&str[j][k-l]=='1')str[j][k-l]='2';
                           if(k+l<8&&str[j][k+l]=='1')str[j][k+l]='2';
                        }
                    }
                }
            }
            if(co==0)break;
        }
        cout<<"Data "<<i<<":"<<endl;
        for(int j=0;j<8;j++)cout<<str[j]<<endl;
    }
}
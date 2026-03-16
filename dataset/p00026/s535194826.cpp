#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int mapi[10][10],x,y,high=0,none=0;
    int penx1[]={-1,0,0,1},peny1[]={0,1,-1,0};
    int penx2[]={-1,-1,-1,0,0,1,1,1},peny2[]={-1,0,1,-1,1,-1,0,1};
    int penx3[]={-2,-1,-1,-1,0,0,0,0,1,1,1,2},peny3[]={0,-1,0,1,2,1,-1,-2,1,0,-1,0};
    char str[7];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            mapi[i][j]=0;
        }
    }
    while(cin>>str){
        for(int i=0;i<10;i++){
            if(str[0]-48==i)x=i;
            if(str[2]-48==i)y=i;
        }
        if(str[4]=='1'){
            for(int i=0;i<4;i++){
                if(x+penx1[i]<10&&x+penx1[i]>=0&&y+peny1[i]<10&&y+peny1>=0)mapi[y+peny1[i]][x+penx1[i]]++;

            }
        }
        else if(str[4]=='2'){
            for(int i=0;i<8;i++){
                if(x+penx2[i]<10&&x+penx2[i]>=0&&y+peny2[i]<10&&y+peny2>=0)mapi[y+peny2[i]][x+penx2[i]]++;

            }
        }
        else{
            for(int i=0;i<12;i++){
                if(x+penx3[i]<10&&x+penx3[i]>=0&&y+peny3[i]<10&&y+peny3>=0)mapi[y+peny3[i]][x+penx3[i]]++;

            }
        }
        mapi[y][x]++;
    /*    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(high<mapi[i][j])high=mapi[i][j];
            if(mapi[i][j]==0)none++;
        }
    }
    cout<<none<<endl<<high<<endl;
    none=0;high=0;
    /*for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                    cout<<mapi[i][j];
            }
            cout<<endl;
    }*/
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(high<mapi[i][j])high=mapi[i][j];
            if(mapi[i][j]==0)none++;
        }
    }
    cout<<none<<endl<<high<<endl;
}
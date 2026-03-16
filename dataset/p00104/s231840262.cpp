#include <iostream>
#include <string>
using namespace std;
int H,W;
int fields[200][200];
bool dp[200][200];
int recoursion(int y,int x){
        if(dp[y][x])
                return false;
        dp[y][x]=true;
        if(fields[y][x]==0){
                H=y;W=x;
                return true;
        }
        else if(fields[y][x]==1)
                return recoursion(y-1,x);
        else if(fields[y][x]==2)
                return recoursion(y+1,x);
        else if(fields[y][x]==3)
                return recoursion(y,x-1);
        else if(fields[y][x]==4)
                return recoursion(y,x+1);
        else
                return false;
}
int main(){
        while(true){
                cin >> H >> W;
                if(H+W==0)
                        break;
                string str;
                for(int i=0 ; i<H ; i++ ){
                        cin >> str;
                        for(int l=0 ; l<W ; l++ ){
                                dp[i][l]=false;
                                if(str[l]=='.')
                                        fields[i][l]=0;
                                else if(str[l]=='^')
                                        fields[i][l]=1;
                                else if(str[l]=='v')
                                        fields[i][l]=2;
                                else if(str[l]=='<')
                                        fields[i][l]=3;
                                else if(str[l]=='>')
                                        fields[i][l]=4;
                        }
                }
                if(recoursion(0,0))
                        cout<<W<<" "<<H<<endl;
                else
                        cout<<"LOOP"<<endl;
        }
        return 0;
}
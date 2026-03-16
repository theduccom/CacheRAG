#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int mlc[11][11],n;
    while(cin>>n,n){
        //restart
        for(int i=0;i<11;i++)for(int j=0;j<11;j++)mlc[i][j]=0;
        //input
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>mlc[i][j];
        //sum
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                mlc[i][n]+=mlc[i][j];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                mlc[n][i]+=mlc[j][i];

        for(int i=0;i<n;i++)mlc[n][n]+=mlc[i][n];

        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++)cout<<setw(5)<<mlc[i][j];
            cout<<endl;


        }

    }
    return 0;
}
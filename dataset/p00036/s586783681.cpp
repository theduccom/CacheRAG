#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
char fld[8][8];
int main(){
while(cin>>fld[0]){
    for(int i=1;i<8;i++){
        cin>>fld[i];
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(fld[i][j]=='1'){
                if(fld[i][j+1]=='1'&&fld[i+1][j]=='1'&&fld[i+1][j+1]=='1'){
                    cout<<'A'<<endl;
                }
                if(fld[i+1][j]=='1'&&fld[i+2][j]=='1'&&fld[i+3][j]=='1'){
                    cout<<'B'<<endl;
                }
                if(fld[i][j+1]=='1'&&fld[i][j+2]=='1'&&fld[i][j+3]=='1'){
                    cout<<'C'<<endl;
                }
                if(fld[i+1][j]=='1'&&fld[i+1][j-1]=='1'&&fld[i+2][j-1]=='1'){
                    cout<<'D'<<endl;
                }
                if(fld[i][j+1]=='1'&&fld[i+1][j+1]=='1'&&fld[i+1][j+2]=='1'){
                    cout<<'E'<<endl;
                }
                if(fld[i+1][j]=='1'&&fld[i+1][j+1]=='1'&&fld[i+2][j+1]=='1'){
                    cout<<'F'<<endl;
                }
                if(fld[i][j+1]=='1'&&fld[i+1][j]=='1'&&fld[i+1][j-1]=='1'){
                    cout<<'G'<<endl;
                }
            }
        }
    }
}
return 0;
}
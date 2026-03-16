#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    char a[300000]={0};
    while(cin>>a){
        char moji=0,c=0;
        int kaz=0;
        for(int i=0;i<strlen(a);i++){
            if(a[i]!='@')cout<<a[i];
            else if(a[i]=='@'){
                for(int j=0;j<a[i+1]-'0';j++){
                    cout<<a[i+2];
                }
                i+=2;
            }
        }
        cout<<endl;
        for(int i = 0; i < 1000; i++){
            a[i]=0;
        }
    }
    return 0;
}
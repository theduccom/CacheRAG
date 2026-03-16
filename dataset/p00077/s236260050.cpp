#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    char str[102],har[10]={"123456789"};
    int n;
    while(scanf("%s",str)!=EOF){
        for(int i=0;str[i]!='\0';i++){
            if(str[i]=='@'){
                for(int j=0;j<10;j++)if(str[i+1]==har[j])n=j+1;
                i+=2;
                for(int j=0;j<n;j++)cout<<str[i];
            }
            else cout<<str[i];
        }
        cout<<endl;
    }

}
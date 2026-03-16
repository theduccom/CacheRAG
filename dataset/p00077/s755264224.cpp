#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){
    char a[200]={0};
    while(cin>>a){
        string s;
        for(int i=0;i<strlen(a);i++){

            if(a[i]=='@'){
                for(int j=0;j<a[i+1]-'0';j++)s+=a[i+2];
                i+=2;
            }
            else s+=a[i];

        }
        cout<<s<<endl;

        memset(a,0,strlen(a));

}

	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<cstring>
using namespace std;
char text[1001];
int main(){
    int i,ii,j,n,a;
    cin>>n;   
    for(i=0;i<=n;i++){
        gets(text);
		a=strlen(text);
		for(j=0;j<a-6;j++){
              if(text[j]=='H'&&text[j+1]=='o'&&text[j+2]=='s'&&text[j+3]=='h'&&text[j+4]=='i'&&text[j+5]=='n'&&text[j+6]=='o'){
                   text[j+6]='a';j+=6;
               }
            }
			if(i==0)continue;
            cout<<text<<endl;
    }

    return 0;
}
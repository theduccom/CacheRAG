#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){

	char a[3];
	int  d[3]={1,0,0};

	while(cin>>a){
        if(a[0]=='A'){
            if(a[2]=='B')swap(d[0],d[1]);
            else if(a[2]=='C')swap(d[0],d[2]);
        }
        else if(a[0]=='B'){
            if(a[2]=='A')swap(d[1],d[0]);
            else if(a[2]=='C')swap(d[1],d[2]);
        }
        else if(a[0]=='C'){
            if(a[2]=='B')swap(d[2],d[1]);
            else if(a[2]=='A')swap(d[2],d[0]);
        }


	}
	if(d[0]==1)cout<<'A'<<endl;
	else if(d[1]==1)cout<<'B'<<endl;
	else if(d[2]==1)cout<<'C'<<endl;


	return 0;
}
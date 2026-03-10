#include<iostream>
using namespace std;

int main(){
    for(int j=1;j<=9;j++)
	for(int i=1;i<=9;i++)
	    cout<<j<<'x'<<i<<'='<<j*i<<'\n';
	    //printf("%dx%d = %d",j,i,j*i);
    return 0;
}
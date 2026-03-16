#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	char bname[3];
	int bcnt[4] = {0};
	while(scanf("%*d,%s%*c", bname) != EOF){
		if(!strcmp(bname,"A")) bcnt[0]++;
		if(bname[0]=='B') bcnt[1]++;
		if(bname[1]=='B') bcnt[2]++;
		if(bname[0]=='O') bcnt[3]++;
	}
	cout << bcnt[0] << endl << bcnt[1] << endl << bcnt[2] << endl << bcnt[3] << endl;
	return 0;
}
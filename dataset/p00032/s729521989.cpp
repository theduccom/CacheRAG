#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int edge[3],rec = 0,loz = 0;
	for(;;){
		if(scanf("%d,%d,%d",&edge[0],&edge[1],&edge[2]) == EOF){break;}
		if(edge[2]*edge[2] == edge[1]*edge[1] + edge[0]*edge[0]){rec++;}
		else if(edge[0] == edge[1]){loz++;}
	}
	cout<<rec<<endl<<loz<<endl;
	return 0;
}
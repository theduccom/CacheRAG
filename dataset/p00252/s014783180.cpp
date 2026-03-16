#include<bits/stdc++.h>

using namespace std;

main(){
	int x,y,z;
	cin >> x >> y >> z;
	if(x==1&&y==0&&z==0){
		printf("Close\n");
	}else if(x==0&&y==1&&z==0){
		printf("Close\n");
	}else if(x==1&&y==1&&z==0){
		printf("Open\n");
	}else if(x==0&&y==0&&z==1){
		printf("Open\n");
	}else{
	printf("Close\n");}
}


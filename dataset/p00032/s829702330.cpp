#include<cstdio>
#include<iostream>

int main(){
	int a,b,c;
	int rec=0,dia=0;
	
	while(scanf("%d,%d,%d",&a,&b,&c) != EOF){
		if(a*a+b*b==c*c)rec++;
		else if(a==b)dia++;
	}

	std::cout<<rec<<std::endl<<dia<<std::endl;
	
	return 0;
}
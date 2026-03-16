#include<iostream>
#include<vector>
#include<stdio.h>
int main(){
	int v1,v2;
	std::vector<int> vec(10);
	while(scanf("%d,",&vec[0])!=EOF) {
		float sum=0;
		for(int i=1;i<10;i++){
			scanf("%d,",&vec[i]);
			//std::cin>>vec[i];
			sum+=vec[i];
		}
		scanf("%d,%d",&v1,&v2);
		//std::cin>>v1>>v2;
		if(std::cin.eof())break;
		float time=sum/(v1+v2);
		float a=v1*time;
		int b=0;
		while(a>0){
			a-=vec[b];
			b++;
		}
		std::cout<<b<<std::endl;
	}
	return 0;
}
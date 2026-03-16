#include<iostream>
#include<cmath>
#include<algorithm>

int main(){
	int data[3];
	while(std::cin>>data[0]>>data[1]>>data[2],data[0],data[1],data[2]){
		int n;
		double min;
		std::sort(data,data+3);
		std::cin>>n;
		min=sqrt(data[0]*data[0]+data[1]*data[1])/2;
		for(int i=0,r;i<n;i++){
			std::cin>>r;
			if(r>min)std::cout<<"OK"<<std::endl;
			else std::cout<<"NA"<<std::endl;
		}
	}
	return 0;
}
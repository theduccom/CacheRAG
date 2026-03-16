#include<iostream>
#include<algorithm>
#include<cmath>

int size[3],n,radius;
int d[10000];

int main(){
	while(std::cin>>size[0]>>size[1]>>size[2] ,(size[0]||size[1]||size[2]) ){
		std::sort(size,size+3);
		std::cin>>n;
		while( n-- ){
			std::cin>>radius;
			if( pow(radius*2,2) <= pow((float)size[0],2) + pow((float)size[1],2) )
				std::cout<<"NA"<<std::endl;
			else std::cout<<"OK"<<std::endl;
		}
	}
	return 0;
}
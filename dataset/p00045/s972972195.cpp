#include<iostream>
#include<vector>
int main(){
	int n,m,sum=0,count1=0,count2=0;
	while(1){
		char a;
		std::cin>>n>>a>>m;
		if(std::cin.eof())break;
		//if(n==0)break;
		sum+=n*m;
		count1+=m;
		count2++;
	}
	int average=(int)((double)count1/(double)count2+0.5);
	std::cout<<sum<<std::endl;
	std::cout<<average<<std::endl;
	return 0;
}
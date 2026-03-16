#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int price,num,sump=0,sum=0,i=0;
	double ave;
	while(scanf("%d,%d",&price,&num)!=EOF){
		sump += price*num;
		sum += num;
		i++;
	}
	ave = sum/(double)i;
	ave += 0.5;
	cout<<sump<<endl<<(int)ave<<endl;
	
	return 0;
}
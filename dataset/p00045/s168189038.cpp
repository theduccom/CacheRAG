#include <iostream>

using namespace std;

int main(){
	int sum=0,i=0;
	int a,b;
	double ave=0.0;
	char gomi;
	while(cin>>a>>gomi>>b){
		sum+=a*b;
		ave+=b;
		i++;
	}
	ave=ave/i;
	if(ave-(double)(int)ave<0.5)
	ave=(double)(int)ave;
	else ave=(double)(int)(ave+0.9);   
	cout<<sum<<"\n"<<ave<<endl;
}
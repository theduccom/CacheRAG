#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main(void){

	long long tan,suu;
	char ch;
	long long sum,ave;
	long long num;
	long long cnt;

	num=0,sum=0,cnt=0;
	while(cin>>tan>>ch>>suu){
		sum+=tan*suu;
		num+=suu;
		cnt++;
		ave=(int)(((double)num/cnt)+0.5);
	}

	cout<<sum<<"\n"<<ave<<endl;

	return 0;
}
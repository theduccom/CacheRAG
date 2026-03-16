#include <iostream>

using namespace std;

int main(){
	char tmp[10];
	int n;
	int data0[10],data1[10];
	for(int i=0;i<10;i++){
		data0[i]=0;
		data1[i]=0;
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tmp;
		for(int j=0;j<8;j++){
			data0[ tmp[j] -'0']++;
			data1[ tmp[j] -'0']++;
		}
		int max = 0;
		int min = 0;
		int rate = 10000000;
		for(int j=9;j>=0;j--){
			while(data0[j]) max += rate * j,data0[j]--,rate/=10;
		}
		rate = 10000000;
		for(int j=0;j<10;j++){
			while(data1[j]) min += rate * j,data1[j]--,rate/=10;
		}
		cout<<max-min<<endl;
	}
	return 0;
}

/*
Sample Input
2
65539010
65539010
Output for the Sample Input
96417531
96417531
*/
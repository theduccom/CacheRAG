#include <iostream>

using namespace std;

int main(){

	long long int num;
	long long int data;

	int cnt=0;

	while(cin>>num){
		cnt = 0;
		if(num==0){
			break;
		}
		for(long long int i = 1;i<=num;i++){
			if(i%5==0){
				long long int tmp = i;
				while(1){
					if(tmp%5!=0){
						break;
					}
					tmp/= 5;
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;

	}
	return 0;
}

/*
Sample Input
2
12
10000
0
Output for the Sample Input
0
2
2499
*/
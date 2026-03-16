#include <iostream>

#define N 1000000

using namespace std;

long long int data[N+1];

int p(int num){
	int cnt = 0;
	int ans = 0;
	for(int i=0;i<=N;i++){
		if(data[i] == 1){
			cnt++;
			ans += i;
		}
		if(cnt == num){
			return ans;
		}
	}
	return -1;
}

int main(){
	for(int i=0;i<=N;i++){
		data[i] = 0;
	}
	for(int i=2;i<=N;i++){
		int state = 0;
		for(int j = 2; j*j <= i;j++){
			if(i%j == 0){
				state = 1;
				break;
			}
		}
		if(state == 0){
			data[i] = 1;
		}
		else{
			data[i] = 0;
		}
	}

	int num;
	while(cin>>num){
		if(num == 0){
			break;
		}
		cout<<p(num)<<endl;
	}
	return 0;
}

/*
Sample Input
2
9
0
Output for the Sample Input
5
100
*/
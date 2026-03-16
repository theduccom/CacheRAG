#include<iostream>
#define MAX 50000
using namespace std;
int main(){
	int p[MAX+1];
	for(int i=0; i<MAX; i++) p[i] = 1;
	p[0] = p[1] = 0;
	for(int i=2; i*i <= MAX; i++){
		if(p[i] == 1){
			for(int j=i*2; j<=MAX; j+=i){
				p[j]=0;
			}
		}
	}
	
	int n;
	while(cin >> n){
		if(n==0) break;
		int count=0;
		for(int i=2; i<=n/2; i++){
			if(p[i]==1 && p[n-i]==1)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}
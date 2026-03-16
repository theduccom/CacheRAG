#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;
bool prime[1000001];

void init(){
	memset(prime,1,1000001);
	prime[0] = prime[1] = false;
	for(int i=0;i*i<=1000000;i++){
		if(prime[i]){
			for(int j=i*i;j<1000001;j+=i)
				prime[j] = false;
		}
	}
}
int main(){
	int n,x;
	
	init();
	
	while(cin >> n >> x,x){
		queue<int> Q;
		vector<int> data(n);
		for(int i=0;i<n;i++){
			cin >> data[i];
		}
		bool able[1000001] ={0};
		Q.push(0);
		while(Q.size()){
			int q = Q.front();Q.pop();
			
			for(int i=0;i<n;i++){
				int next = q + data[i];
				if(next>1000000)continue;
				if(able[next])continue;
				Q.push(next);
				able[next] = true;
			}
		}
		for(int i=x;i>1;i--){
			if(able[i] && prime[i]){
				cout << i << endl;
				goto l;
			}
		}
		cout << "NA" << endl;
		l:;
	}
}
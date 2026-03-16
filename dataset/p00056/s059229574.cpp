#include<iostream>
using namespace std;

bool p[50050];

void erato(){
	fill(p, p+50050, true);
	p[0] = p[1] = false;

	for(int i=0; i *i < 50050; i++){
		if(!p[i]) continue;
		for(int j = i+i; j < 50050; j += i){
			p[j] = false;
		}
	}
}

int main(){
	erato();
	int input;
	int ans;
	while(cin >> input, input){
		ans = 0;
		for(int i=0; i <= input/2; i++){
			if(p[i] && p[input-i]){
				if(i + input-i == input) ans++;
			}
		}

		cout << ans << endl;
	}
}
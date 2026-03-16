#include<iostream>
using namespace std;

bool p[200000];

void erato(){
	fill(p, p+200000, true);
	p[0] = p[1] = false;

	for(int i=0; i*i < 200000; i++){
		if(!p[i]) continue;

		for(int j= i+i; j < 200000; j += i){
			p[j] = false;
		}
	}
}

int main(){
	erato();
	int ans, num, input;
	while(cin >> input, input){
		ans = 0; num = 0;
		for(int i=0; i < 200000; i++){
			if(p[i]){
				ans += i;
				num++;
			}
			if(num == input) break;
		}
		cout << ans << endl;
	}

}
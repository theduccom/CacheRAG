#include<iostream>
#include<algorithm>
using namespace std;

bool p[10010];

int era(){
	fill(p, p+10010, true);
	p[0] = p[1] = false;

	for(int i=0; i < 10010; i++){
		if(!p[i]) continue;

		for(int j=i+i; j < 10010; j+=i){
			p[j] = false;
		}
	}
}

int main(){
	era();
	int input;

	while(cin >> input, input){
		for(int i= input; 0 < i; i--){
			if(p[i] && p[i-2]){
				cout << i-2 << " " << i << endl;
				break;
			}
		}
	}
}
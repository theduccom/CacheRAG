#include<iostream>
#include<stdio.h>
using namespace std;

bool p[50050];

void erato(){
	fill(p, p+50050, true);
	p[0] = p[1] = false;

	for(int i=0; i *i < 50050; i++){
		if(!p[i]) continue;
		for(int j = i + i; j < 50050; j+= i){
			p[j] = false;
		}
	}
}

int input;
int big, small;

int main(){
	erato();
	while(scanf("%d", &input) != EOF){
		big = small = input;
		big++; small--;
		while(1){
			if(p[small] && p[big]) break;
			if(!p[small])small--;
			if(!p[big])big++;
		}
		cout << small << " " << big << endl;
	}
}
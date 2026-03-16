#include <iostream>
#include <string>
using namespace std;
bool Istraveled[100][100];
char data[100][100];

void solve(int h,int w) {
	Istraveled[h][w]=true;
	char x=data[h][w];
	if(x=='.') {
		cout<<w<<" "<<h<<endl;
	}
	else if(x=='^') {
		if(Istraveled[h-1][w]==true) {
			cout<<"LOOP"<<endl;
		}
		else {
			solve(h-1,w);
		}
	}
	else if(x=='v') {
		if(Istraveled[h+1][w]==true) {
			cout<<"LOOP"<<endl;
		}
		else {
			solve(h+1,w);
		}
	}
	else if(x=='>') {
		if(Istraveled[h][w+1]==true) {
			cout<<"LOOP"<<endl;
		}
		else {
			solve(h,w+1);
		}
	}
	else if(x=='<') {
		if(Istraveled[h][w-1]==true) {
			cout<<"LOOP"<<endl;
		}
		else {
			solve(h,w-1);
		}
	}
}

int main(void) {
	int h,w;
	string in;
	while(cin>>h>>w,h) {
		for(int i=0;i<h;i++) {
			cin>>in;
			for(int j=0;j<w;j++) {
				data[i][j]=in[j];
				Istraveled[i][j]=false;
			}
		}
		solve(0,0);
	}
	return 0;
}
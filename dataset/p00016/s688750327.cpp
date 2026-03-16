#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main(){
	int w,deg;
	double x=0,y=0,pre=M_PI/2;
	string buf;
	while(cin>>buf){
		/* atoi */
		int ptr=0;
		string tmp1,tmp2;
		while(buf[ptr]!=',') tmp1+=buf[ptr++];
		w = atoi(tmp1.c_str());
		++ptr;
		while(buf[ptr]) tmp2+=buf[ptr++];
		deg = atoi(tmp2.c_str());
		/* read end */
		if(w==0&&deg==0) break;
		x+=(double)w*cos(pre);
		y+=(double)w*sin(pre);
		pre-=(double)deg*M_PI/180;
	}
	cout << (int) x << endl;
	cout << (int) y << endl;
	return 0;
}
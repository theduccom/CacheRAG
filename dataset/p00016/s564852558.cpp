#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> X,Y;
int main(){
	int x=1,y=0;
	while(1){
		scanf("%d,%d",&x,&y);
		if(!(x||y)) break;
		X.push_back(x);
		Y.push_back(y);
	}
	double nx=0,ny=0,na=0;
	for(int i=0;i<X.size();i++){
		nx+=(double)X[i]*sin(na*M_PI/180.0);ny+=(double)X[i]*cos(na*M_PI/180.0);
		na+=(double)Y[i];
	}
	cout<<(int)nx<<endl<<(int)ny<<endl;
	return 0;
}
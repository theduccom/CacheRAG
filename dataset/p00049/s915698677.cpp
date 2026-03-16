#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
#include<cmath>
typedef long long int ll;
#define VI vector<int>

#define rep(i,a) for(int i=0;i<(a);i++)

int n,m;

using namespace std;


int main(){
	int A=0,B=0,AB=0,O=0;
	while(1){
		int a;
		char b;
		string c;
		if(!(cin>>a>>b>>c))break;
		if(c=="A")A++;
		if(c=="B")B++;
		if(c=="AB")AB++;
		if(c=="O")O++;
		
	}
	cout<<A<<endl<<B<<endl<<AB<<endl<<O<<endl;

	return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <sstream>
#include <map>
 
using namespace std;
 
const double eps=1e-10;
 
int main()
{
	int x,y,s,c[14][14]={0};
	char dummy;
	while(cin>>x>>dummy>>y>>dummy>>s){
		x+=2; y+=2;

		c[y][x]++;
		c[y+1][x]++; c[y-1][x]++;
		c[y][x+1]++; c[y][x-1]++;

		if(s>=2){
			c[y-1][x-1]++; c[y-1][x+1]++;
			c[y+1][x-1]++; c[y+1][x+1]++;
		}

		if(s==3){
			c[y-2][x]++; c[y+2][x]++;
			c[y][x-2]++; c[y][x+2]++;
		}

	}

	int w=0,d=0;
	for(int i=2;i<12;i++){
		for(int j=2;j<12;j++){
			if(c[i][j]==0) w++;
			d=max(d,c[i][j]);
		}
	}

	cout<<w<<endl<<d<<endl;


	return 0;
}
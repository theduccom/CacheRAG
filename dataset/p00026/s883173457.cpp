#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
using namespace std;
void drop(int x,int y,int *k,int d[10][10]){
	if(x>=0&&y>=0&&x<10&&y<10){
		if(d[y][x]==0)
			*k=*k-1;
		d[y][x]++;	
	}
}

int main(){
	
	int d[10][10]={0};
	char comma;
	int x,y,s;
	int k=100;
	while(cin>>x>>comma>>y>>comma>>s){
		if(s>=1){
			drop(x,y,&k,d);
			drop(x+1,y,&k,d);
			drop(x,y+1,&k,d);
			drop(x-1,y,&k,d);
			drop(x,y-1,&k,d);
	}
		if(s>=2){
			drop(x+1,y+1,&k,d);
			drop(x+1,y-1,&k,d);
			drop(x-1,y-1,&k,d);
			drop(x-1,y+1,&k,d);
		}
		if(s>=3){
			drop(x-2,y,&k,d);
			drop(x+2,y,&k,d);
			drop(x,y-2,&k,d);
			drop(x,y+2,&k,d);
		}
	}
	cout<<k<<endl;
	int max=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(max<d[i][j])
				max=d[i][j];
		}
	}
	cout<<max<<endl;
}
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	vector<int>a;
	vector<int>b;
	int x,y;
	char c;
	while( cin>>x>>c>>y){
		a.push_back(x);
		b.push_back(y);
	}
	int sum=0,cnt=0;
	for(int i=0;i<a.size();i++){
		sum+=a[i]*b[i];
		cnt+=b[i];
	}
	printf("%d\n%d\n",sum,(int)(cnt/(double)a.size()+0.5));
	return 0;
}
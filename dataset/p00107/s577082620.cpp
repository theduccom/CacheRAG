#include<iostream>
#include<sstream>
#include<fstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
	vector<int> args(3);
	while(cin>>args[0]>>args[1]>>args[2], args[0]||args[1]||args[2]){
	sort(args.begin(),args.end());
	int n;
	cin>>n;
	double d  = args[0]*args[0] + args[1]*args[1];
	//cout<<args[0]<<":"<<args[1]<<endl;
	for(int x=0;x<n;++x){
		int r;
		cin>>r;
		if(4*r*r>d){
			cout<<"OK"<<endl;
		}else{
			cout<<"NA"<<endl;
		}
	}
	}
	return 0;
}
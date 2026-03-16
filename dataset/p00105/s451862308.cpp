#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
#include<stack>
#include<functional>
using namespace std;

int main(){
	map<string,priority_queue<int,vector<int>,greater<int> > > latte;
	string S;
	int P;
	while(cin>>S>>P){
		latte[S].push(P);
	}
	map<string,priority_queue<int,vector<int>,greater<int> > >::iterator itr = latte.begin();
	while(itr!=latte.end()){
		cout<<itr->first<<endl;
		printf("%d",itr->second.top()); itr->second.pop();
		while(!itr->second.empty()){
			printf(" %d",itr->second.top()); itr->second.pop();
		}puts("");
		itr++;
	}
}
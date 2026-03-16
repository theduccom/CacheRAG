#include<iostream>
#include<map>
#include<sstream>
#include<cstring>
#include<queue>
#include<string>
#include<algorithm>
#define all(c) c.begin(),c.end()
#define INF 100000000
using namespace std;
map<vector<int> ,int> mp;
void compute(vector<int> s){
	queue<vector<int> > que;
	que.push(s);
	mp[s]=0;
	while(!que.empty()){
		vector<int> t=que.front();
		que.pop();
		vector<int> now;
		for(int i=0;i<8;i++){
			if(t[i]==0){
				if(i<=3){
					now=t;
					swap(now[i],now[i+4]);
					if(mp[now]>mp[t]+1){
						mp[now]=mp[t]+1;
						que.push(now);
					}
				}else{
					now=t;
					swap(now[i],now[i-4]);
					if(mp[now]>mp[t]+1){
						mp[now]=mp[t]+1;
						que.push(now);
					}
				}
				if(i==0||i==4){
					now=t;
					swap(now[i],now[i+1]);
					if(mp[now]>mp[t]+1){
						mp[now]=mp[t]+1;
						que.push(now);
					}
				}else if(i==3||i==7){
					now=t;
					swap(now[i],now[i-1]);
					if(mp[now]>mp[t]+1){
						mp[now]=mp[t]+1;
						que.push(now);
					}
				}else{
					now=t;
					swap(now[i],now[i-1]);
					if(mp[now]>mp[t]+1){
						mp[now]=mp[t]+1;
						que.push(now);
					}
					now=t;
					swap(now[i],now[i+1]);
					if(mp[now]>mp[t]+1){
						mp[now]=mp[t]+1;
						que.push(now);
					}
				}
				break;
			}
		}
	}
}
int main(){
	vector<int> s(8);
	vector<int> c(8);
	for(int i=0;i<8;i++){
		s[i]=i;
		c[i]=i;
	}
	do{
		mp[c]=INF;
	}while(next_permutation(all(c)));
	compute(s);
	string z;
	while(getline(cin,z)){
		stringstream ss(z);
		vector<int> v(8);
		for(int i=0;i<8;i++){
			ss>>v[i];
		}
		cout<<mp[v]<<endl;
	}
	return 0;
}
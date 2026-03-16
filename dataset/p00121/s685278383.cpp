#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int d[4]={1,4,-1,-4};
map<vector<int>,int>data;
int main(){
	vector<int> goal(8);
	rep(i,8)goal[i]=i;
	int res=0;
	queue<vector<int> > q;
	q.push(goal);
	while(!q.empty()){
		int pos;
		vector<int> now=q.front();q.pop();
		rep(i,8)if(now[i]==0)pos=i;
		rep(i,4){
			int nn=pos+d[i];
			if(nn>=0&&nn<8&&(pos+nn!=7)){
				vector<int> tmp=now;
				swap(tmp[nn],tmp[pos]);
				if(data.find(tmp)==data.end()){
					q.push(tmp);
					data[tmp]=data[now]+1;
				}
			}
		}
	}
	vector<int> input(8);
	while(cin>>input[0]){
		for(int i=1;i<8;i++)cin>>input[i];
		cout<<data[input]<<endl;
	}
}
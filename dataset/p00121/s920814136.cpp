#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (int) (l);i < (int) (r);i++)
#define ALL(x) x.begin(),x.end()
template<typename T> bool chmax(T& a,const T& b){ return a < b ? (a = b,true) : false; }
template<typename T> bool chmin(T& a,const T& b){ return b < a ? (a = b,true) : false; }
typedef long long ll;

map< vector<int>,int > mp;

int main()
{
	queue< pair< vector<int>,int > > q;
	q.push(make_pair(vector<int>{0,1,2,3,4,5,6,7},0));

	mp [q.front().first] = 0;
	while(q.empty() == false){
		vector<int> v = q.front().first;
		int c = q.front().second;
		q.pop();

		int pos = 0;
		FOR(i,0,8) if(v [i] == 0){
			pos = i;
			break;
		}
		if(pos >= 4){
			swap(v [pos],v [pos - 4]);
			if(mp.count(v) == 0){
				mp [v] = c + 1;
				q.push(make_pair(v,c + 1));
			}
			swap(v [pos],v [pos - 4]);
		}
		else{
			swap(v [pos],v [pos + 4]);
			if(mp.count(v) == 0){
				mp [v] = c + 1;
				q.push(make_pair(v,c + 1));
			}
			swap(v [pos],v [pos + 4]);
		}
		if(pos != 3 && pos != 7){
			swap(v [pos],v [pos + 1]);
			if(mp.count(v) == 0){
				mp [v] = c + 1;
				q.push(make_pair(v,c + 1));
			}
			swap(v [pos],v [pos + 1]);
		}
		if(pos != 0 && pos != 4){
			swap(v [pos],v [pos - 1]);
			if(mp.count(v) == 0){
				mp [v] = c + 1;
				q.push(make_pair(v,c + 1));
			}
			swap(v [pos],v [pos - 1]);
		}
	}

	vector<int> v(8);
	while(~scanf("%d",&v [0])){
		FOR(i,1,8){
			scanf("%d",&v [i]);
		}
		printf("%d\n",mp [v]);
	}

	return 0;
}
#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int val[8];
int dp[16777217];

class State{
public:
	int t,cost;

	State(int tt,int tcost){
		t = tt;
		cost = tcost;
	}
};

int change(int t,int from,int to){
	int digit = (t / val[to]) % val[1];
	return t - digit * val[to] + digit * val[from];
}

int zeroIdx(int t){
	for(int i=0;i<8;i++){
		if((t/val[i]) % val[1] == 0) return i;
	}
	return -1;
}

int DP(void){
	int start = 0;
	for(int i=0;i<8;i++){
		val[i] = (int)pow(8,i);
		start += i * val[i];
	}

	queue<State> open;
	State st(start,0);
	open.push(st);
	dp[start] = -1;

	while(!open.empty()){
		st = open.front(); open.pop();
		int idx = zeroIdx(st.t);

		if(idx >= 4){
			int aft = change(st.t,idx,idx-4);
			if(dp[aft] == 0){
				dp[aft] = st.cost + 1;
				open.push(State(aft,st.cost+1));
			}
		}
		else if(idx < 4){
			int aft = change(st.t,idx,idx+4);
			if(dp[aft] == 0){
				dp[aft] = st.cost + 1;
				open.push(State(aft,st.cost+1));
			}
		}
		if(idx % 4 > 0){
			int aft = change(st.t,idx,idx-1);
			if(dp[aft] == 0){
				dp[aft] = st.cost + 1;
				open.push(State(aft,st.cost+1));
			}
		}
		if(idx % 4 < 3){
			int aft = change(st.t,idx,idx+1);
			if(dp[aft] == 0){
				dp[aft] = st.cost + 1;
				open.push(State(aft,st.cost+1));
			}
		}
	}

	dp[start] = 0;
}

int main(void){
	DP();

	while(1){
		int sum = 0;
		for(int i=0;i<8;i++){
			int x;
			if(!(cin>>x)) return 0;
			sum += x * val[i];
		}
		cout<<dp[sum]<<endl;
	}

	return 0;
}
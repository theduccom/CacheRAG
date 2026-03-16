#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<climits>
#include<algorithm>
#include<string>
#include<cstring>
#include<cmath>
#include<set>
#include<stack>
#include<functional>
#include<queue>
using namespace std;

const int d[4] ={-1,-4,1,4};

int main(){
    map<string,int> memo; memo["01234567"] = 0;
    queue<string> q; q.push("01234567");
	string q_c;
	while(!q.empty()){
		q_c = q.front(); q.pop();
		int n = find(q_c.begin(),q_c.end(),'0')-q_c.begin();
		for(int i=0;i<4;i++){
			int nn = n+d[i];
			if((n==3 && nn==4) || (n==4 && nn==3) || nn<0 || 8<=nn) continue;
			string q_d = q_c; swap(q_d[n],q_d[nn]);
			if(memo.find(q_d)==memo.end()){
				q.push(q_d); memo[q_d] = memo[q_c]+1;
			}
		}
	}
    while(true){
        char in[9]={};
        for(int i=0;i<8;i++) if(!(cin>>in[i])) return 0;
        string s = in;
        printf("%d\n",memo[s]);
	}
	return 0;
}
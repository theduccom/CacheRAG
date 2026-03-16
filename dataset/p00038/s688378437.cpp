#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


int main(){
	
	int a,b,c,d,e;
	while(scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e)!=EOF){
		typedef map<int,int> mii;
		
		mii m;
		m[a]++;
		m[b]++;
		m[c]++;
		m[d]++;
		m[e]++;
		
		typedef pair<int,int> pii;
		vector<pii> dat;
		mii::iterator it = m.begin();
		while(it!=m.end()){
			dat.push_back(pii(-it->second,it->first));
			it++;
		}
		sort(dat.begin(),dat.end());
		rep(i,dat.size())dat[i].first*=-1;
		
		
		bool flg[8]={false};
		flg[1]=true;
		if(dat[0].first==2){
			flg[2]=true;
		}
		if(dat[0].first==2 && dat[1].first==2){
			flg[3]=true;
		}
		if(dat[0].first==3){
			flg[4]=true;
		}
		
		if(dat.size()==5){
			int st = 0;
			if(dat[0].second==1 && dat[4].second==13)st=1;
			bool ok=true;
			reps(i,st,dat.size()-1){
				if(dat[i].second+1!=dat[i+1].second)ok=false;
			}
			flg[5]=ok;
		}
		
		if(dat[0].first==3 && dat[1].first==2){
			flg[6]=true;
		}
		if(dat[0].first==4){
			flg[7]=true;
		}
		
		//rep(i,dat.size())printf("%d-%d ",dat[i].first,dat[i].second);puts("");
		
		string yaku[8]={
			"null",
			"null",
			"one pair",
			"two pair",
			"three card",
			"straight",
			"full house",
			"four card"
		};
		
		for(int i=7;i>=1;i--){
			if(flg[i]){
				cout<<yaku[i]<<endl;
				break;
			}
		}
		
	}
}
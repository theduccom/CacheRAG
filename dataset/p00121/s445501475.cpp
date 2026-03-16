#include <bits/stdc++.h>

#define rep(x,to) for(int (x)=0;(x)<(to);(x)++)

using namespace std;



int main()
{
	typedef vector<char> VC;
	VC p={0,1,2,3,4,5,6,7};
	map<VC, int> mp;
	mp[p] = 0;
	
	int dr[]={0,1,0,-1,0};
	int ct=0;
	queue< VC > que;
	que.push(p);
	while(!que.empty()){
		auto cr = que.front(); que.pop();
		int zps = -1;
		rep(i,8) if(cr[i]==0){zps = i; break;}
		int cy = zps/4, cx = zps%4;
		rep(i,4){
			int ny=cy+dr[i], nx=cx+dr[i+1];
			if(ny<0 || ny>=2 || nx<0 || nx>=4) continue;
			auto wv=cr;
			swap(wv[zps], wv[ny*4+nx]);
			if(mp.count(wv)) continue;
			mp[wv] = mp[cr]+1;
			que.push(wv);
		}
		//printf("%d::%d\n", ct++, mp.size());
	}


	int su;
	while(cin >> su){
		VC ba(8);
		ba[0]=su;
		rep(i,7){ cin >> su; ba[i+1]=su;} 
		
		cout << mp[ba] << endl;
	
	}
	
	return 0;
}
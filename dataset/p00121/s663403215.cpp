#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>
#include<cstdio>
#include<cstdlib>
#include<map>
#include<queue>
#include<set>

using namespace std;
typedef pair<int,int> PII;

int	card[40320];

int perm2num(vector<int> perm){
	int num=0;
	for(int i=0;i<8;i++){
		num *= 8-i;
		num += perm[i];
		for(int j=i+1;j<8;j++){
			if(perm[j]>perm[i])perm[j]--;
		}
	}
	return num;
}

void solve(){
	vector<int> bgn(10);
	for(int i=0;i<8;i++) bgn[i] = i;
	vector<int> tmp(10);
	queue<vector<int> > qu;
	qu.push(bgn);
	while(!qu.empty()){
		tmp = qu.front();
		//int b=0;
		//for(;b<8;b++) if(tmp[b] != 7-b)break;
		//if(b==8)break;
		qu.pop();
		if(tmp[8]<4){
			swap(tmp[tmp[8]],tmp[tmp[8]+4]);			
			tmp[9]++;
			tmp[8]+=4;
			if (card[perm2num(tmp)]==-1){
				qu.push(tmp);
				card[perm2num(tmp)] = tmp[9];
			}
			tmp[9]--;
			tmp[8]-=4;
			swap(tmp[tmp[8]],tmp[tmp[8]+4]);			
		}
		else{
			swap(tmp[tmp[8]],tmp[tmp[8]-4]);			
			tmp[9]++;
			tmp[8]-=4;
			if (card[perm2num(tmp)]==-1){
				qu.push(tmp);
				card[perm2num(tmp)] = tmp[9];
			}
			tmp[9]--;
			tmp[8]+=4;
			swap(tmp[tmp[8]],tmp[tmp[8]-4]);			
		}
		if(tmp[8]%4>0){
			swap(tmp[tmp[8]],tmp[tmp[8]-1]);			
			tmp[9]++;
			tmp[8]--;
			if (card[perm2num(tmp)]==-1){
				qu.push(tmp);
				card[perm2num(tmp)] = tmp[9];
			}
			tmp[8]++;
			swap(tmp[tmp[8]],tmp[tmp[8]-1]);			
			tmp[9]--;
		}
		if(tmp[8]%4<3){
			swap(tmp[tmp[8]],tmp[tmp[8]+1]);			
			tmp[9]++;
			tmp[8]++;
			if (card[perm2num(tmp)]==-1){
				qu.push(tmp);
				card[perm2num(tmp)] = tmp[9];
			}
			tmp[8]--;
			tmp[9]--;
			swap(tmp[tmp[8]],tmp[tmp[8]+1]);			
		}
	}
}

int main(){
	card[0] = 0;
	for(int i=1;i<40320;i++) card[i] = -1;
	solve();
	vector<int> perm(8);
	while(true){
		int i=0;
		for(;i<8;i++){
			if(!(scanf("%d",&perm[i])+1))break;
		}
		if(i<8)break;
		cout<<card[perm2num(perm)]<<endl;
	}
	
  return 0;
}
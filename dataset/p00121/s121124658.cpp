#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <cstring>

using namespace std;

//int nums[8];
vector<int> nums;
//map<string,bool> used;
string src;

const int d[]={-1,4,1,-4};
bool used[8][8][8][8][8][8][8][8];
int dp[8][8][8][8][8][8][8][8];


void bfs(vector<int> s){
	//if(s==src)
	//	return 0;
	//bool f=true;
	//for(int i = 0; i < s.size(); i++){
	//	if(s[i]!=nums[i]){
	//		f=false;
	//		break;
	//	}
	//}
	//if(f){
	//	return 0;
	//}

	set<vector<int> > *prv=new set<vector<int> >();
	set<vector<int> > *nxt=new set<vector<int> >();

	prv->insert(s);
	dp[0][1][2][3][4][5][6][7]=0;

	int cnt=1;
	while(prv->size()){
		for(set<vector<int> >::iterator it = prv->begin(); it != prv->end(); it++){
			vector<int> cs=*it;
			if(used[cs[0]][cs[1]][cs[2]][cs[3]][cs[4]][cs[5]][cs[6]][cs[7]])
				continue;
			used[cs[0]][cs[1]][cs[2]][cs[3]][cs[4]][cs[5]][cs[6]][cs[7]]=true;
			int zi;
			for(int i = 0; i < cs.size(); i++){
				if(cs[i]==0){
					zi=i;
					break;
				}
			}
			for(int i = 0; i < 4; i++){
				int np=zi+d[i];
				if((zi==0&&(i==1||i==2))
					||((zi>=1&&zi<=2)&&(i>=0&&i<=2))
					||(zi==3&&(i==0||i==1))
					||(zi==4&&(i==3||i==2))
					||(zi==7&&(i==0||i==3))
					||((zi>=5&&zi<=6)&&(i!=1))
					){
					vector<int> ns=cs;
					std::swap(ns[zi],ns[np]);
					if(!used[ns[0]][ns[1]][ns[2]][ns[3]][ns[4]][ns[5]][ns[6]][ns[7]]){
						nxt->insert(ns);
						dp[ns[0]][ns[1]][ns[2]][ns[3]][ns[4]][ns[5]][ns[6]][ns[7]]
						=dp[cs[0]][cs[1]][cs[2]][cs[3]][cs[4]][cs[5]][cs[6]][cs[7]]+1;
						//if(ns==nums){
						//	return cnt;
						//}
					}
				}
			}
		}
//		cout<<nxt->size()<<endl;
		swap(prv,nxt);
		nxt->clear();
		cnt++;
	}
	delete prv,nxt;
}

//int dfs(string s,int cnt){
//	//cout<<cnt<<endl;
//	if(s=="01234567"){
//		return 0;
//	}
//	//if(dp[s]!=-1)
//		return dp[s];
//
//	//cout<<cnt<<endl;
//	int idx;
//	for(int i = 0; i < s.size(); i++){
//		if(s[i]=='0'){
//			idx=i;
//			break;
//		}
//	}
//	int minNum=10000000;
//	for(int i = 0; i < 4; i++){
//		int np=idx+d[i];
//		if(np>=0&&np<8){
//			string ns=s;
//			swap(ns[idx],ns[np]);
//			if(!used[ns]){
//				//used.insert(ns);
//				used[ns]=true;
//				minNum=min(minNum,dfs(ns,cnt+1)+1);
//				used[ns]=false;
//				//used.erase(ns);
//			}
//		}
//	}
//	dp[s]=minNum;
//	return minNum;
//}

int main(){

	//string ts="01234567";
	vector<int> v;
	for(int i = 0; i < 8; i++){
		v.push_back(i);
		nums.push_back(0);
	}

	//do{
	//	
	//}while(next_permutation(ts.begin(),ts.end()));

	memset(used,0,sizeof(used));
	bfs(v);
	while(cin>>nums[0]>>nums[1]>>nums[2]>>nums[3]>>nums[4]>>nums[5]>>nums[6]>>nums[7]){
		cout<<dp[nums[0]][nums[1]][nums[2]][nums[3]][nums[4]][nums[5]][nums[6]][nums[7]]<<endl;
//		cout<<dp[nums[0]]
		//string s;
		//for(int i = 0; i < 8; i++){
		//	s+=nums[i];
		//}
		//for(map<string,bool>::iterator it = used.begin(); it != used.end(); it++){
		//	used[it->first]=false;
		//}
//		src=s;

	}

	return 0;
}
#include<iostream>
#include<cstdio>
#include<queue>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
typedef pair<string,int> Pa;
map<string,int>MP;
queue<Pa>Q;
Pa temp,t;
int bz[4]={4,-4,1,-1};
void bfs(){
	while(!Q.empty()){
		temp=Q.front();
		Q.pop();
		for(int i=0;i<4;i++){
			int next=bz[i]+temp.second;
			string str=temp.first;
			swap(str[next],str[temp.second]);
			map<string,int>::iterator it=MP.find(str);
			if(next>=0&&next<8&&!(next==3&&temp.second==4)&&!(next==4&&temp.second==3)&&it==MP.end()){
				MP[str]=MP[temp.first]+1;
				t.first=str;t.second=next;
				Q.push(t);
			}
		}
	}
}
int main(){
	string ans;
	Pa t("01234567",0);
	MP["01234567"]=0;
	Q.push(t);
	bfs();
	while(getline(cin,ans)){
		ans.erase(remove(ans.begin(),ans.end(),' '),ans.end());
		printf("%d\n",MP[ans]);
	}
}
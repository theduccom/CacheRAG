#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<string>
#include<map>
#include<set>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<ctime>
#define RG register
#define file(x) freopen(x".in","r",stdin);freopen(x".out","w",stdout);
using namespace std;

inline int gi(){
    RG int data=0,w=1;
    RG char ch=0;
    while(ch!='-'&&(ch>'9'||ch<'0')) ch=getchar();
    if(ch=='-') w=-1,ch=getchar();
    while(ch>='0'&&ch<='9') data=(data<<1)+(data<<3)+(ch^48),ch=getchar();
    return w*data;
}
string s,goal;
map<string,int> S;
int a[10];

inline void BFS(){
	queue<string> Q1;queue<int> Q2;
	S.clear();
	Q1.push(goal),Q2.push(0);
	S[goal]=1;
	while(!Q1.empty()){
		int t=Q2.front();RG string str=Q1.front();
		Q1.pop(),Q2.pop();
		int x;
		for(RG int i=0;i<=7;i++) if(str[i]==0){x=i;break;}
		switch(x){
		case 0:
			swap(str[0],str[4]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[0],str[4]);
			swap(str[0],str[1]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[0],str[1]);
			break;
		case 1:
			swap(str[1],str[0]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[1],str[0]);
			swap(str[1],str[2]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[1],str[2]);
			swap(str[1],str[5]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[1],str[5]);
			break;
		case 2:
			swap(str[2],str[1]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[2],str[1]);
			swap(str[2],str[6]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[2],str[6]);
			swap(str[2],str[3]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[2],str[3]);
			break;
		case 3:
			swap(str[3],str[2]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[3],str[2]);
			swap(str[3],str[7]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[3],str[7]);
			break;
		case 4:
			swap(str[4],str[0]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[4],str[0]);
			swap(str[4],str[5]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[4],str[5]);
			break;
		case 5:
			swap(str[5],str[4]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[5],str[4]);
			swap(str[5],str[1]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[5],str[1]);
			swap(str[5],str[6]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[5],str[6]);
			break;
		case 6:
			swap(str[6],str[5]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[6],str[5]);
			swap(str[6],str[2]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[6],str[2]);
			swap(str[6],str[7]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[6],str[7]);
			break;
		case 7:
			swap(str[7],str[3]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[7],str[3]);
			swap(str[7],str[6]);if(!S[str]) Q1.push(str),Q2.push(t+1),S[str]=t+1;swap(str[7],str[6]);
			break;
   		}
	}
}

int main(){
	for(RG int i=0;i<=7;i++) goal.push_back(i);
	BFS();S[goal]=0;
	while(scanf("%d\n",&a[0])!=EOF){
		s.clear();s.push_back(a[0]);
		for(RG int i=1;i<=7;i++) a[i]=gi(),s.push_back(a[i]);
		printf("%d\n",S[s]);
	}
	return 0;
}


//#include<string.h>
//#include<queue>
//#include<algorithm>
//using namespace std;
//#include<bits/stdc++.h>
//#include<map>
#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<queue>
using namespace std;
map <string,int> st;
queue<string> sd;
string a,aa;
int ar[4]={1,-1,4,-4}; 
void bfs(){
	while(!sd.empty()){
		aa=sd.front();
		sd.pop();
		int fla;
		for(int i=0;i<8;i++){
			if(aa[i]=='0'){
				fla=i;
				break;
			}
		}
		for(int i=0;i<4;i++){
		int x=fla+ar[i];
		if(x>=0&&x<=7&&!(fla==3&&i==0)&&!(fla==4&&i==1)){
			string ss=aa;
		 	swap(ss[fla],ss[x]);
		 	if(st.find(ss)==st.end()){
//		 		cout<<aa<<endl;
				st[ss]=st[aa]+1;
				sd.push(ss);	
			 }
		}	
		}
	} 
}
int main() {
	a="01234567";
	st[a]=0;
	sd.push(a);
	bfs();
//	printf("%d\n",st.size());
	int n;
	int q;
	while(scanf("%d",&q)!=EOF){
		string bb;
		bb+=(q+'0');
		for(int i=1;i<=7;i++){
		scanf("%d",&q);
			bb+=(q+'0');
		}
//		cout<<bb<<endl;
		printf("%d\n",st[bb]);
	}
	return 0;
}












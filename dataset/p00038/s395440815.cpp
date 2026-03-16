#include <iostream>
#include <cstdio>
#include <set>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int card[5]={0};
	while(scanf("%d,%d,%d,%d,%d",&card[0],&card[1],&card[2],&card[3],&card[4]) != EOF){
		set<int> poker;
		vector<int> p;
		for(int i=0;i<5;i++){
			poker.insert(card[i]);
			p.push_back(card[i]);
		}
		sort(p.begin(),p.end());
		int d=poker.size();
		switch(d){
		case 2:
			if(p[2]!=p[3] || p[1]!=p[2]) cout<<"full house"<<endl;
			else cout<<"four card"<<endl;
			break;
		case 3:
			if((p[0]==p[1] && p[1]==p[2])||(p[1]==p[2] && p[2]==p[3])||(p[2]==p[3] && p[3]==p[4])) cout<<"three card"<<endl;
			else cout<<"two pair"<<endl;
			break;
		case 4:
			cout<<"one pair"<<endl;
			break;
		case 5:
			if(p[1]==p[0]+1 && p[2]==p[1]+1 && p[3]==p[2]+1 && p[4]==p[3]+1) cout<<"straight"<<endl;
			else if(p[0]==1 && p[1]==10 && p[2]==11 && p[3]==12 && p[4]==13) cout<<"straight"<<endl;
			else cout<<"null"<<endl;
			break;
		}
	}
	return 0;
}
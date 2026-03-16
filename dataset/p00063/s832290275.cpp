#include<bits/stdc++.h>
using namespace std;

int main(){
	string sa;
	int ca=0;
	while(cin>>sa){
		string sb=sa;
		reverse(sa.begin(),sa.end());
		string sc=sa;
		if(sb==sc){ca+=1;}
		}
		
		cout<<ca<<endl;
		return 0;
	}
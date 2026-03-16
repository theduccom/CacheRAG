#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
using namespace std;
int stoi(string x){stringstream ss;ss<<x;int tmp;ss>>tmp;return tmp;}
string itos(int x){stringstream ss;ss<<x;return ss.str();}
int main(){
	map<char,bool>t;
	t.insert(make_pair<char,bool>('A',1));
	t.insert(make_pair<char,bool>('B',0));
	t.insert(make_pair<char,bool>('C',0));
	t['A']=1;
	char a,b;
	while(scanf("%1s,%1s",&a,&b)!=EOF){
	swap(t[a],t[b]);
	}
	map<char,bool>::iterator it=t.begin();
	for(;it!=t.end();it++)if((*it).second==1)cout<<(*it).first<<endl;
	return 0;
}
#include<iostream>
#include<functional>
#include<string>
#include<map>
#include<queue>
#include<vector>
#include<set>
using namespace std;
typedef pair<string,int> P;
int main(){
	string s,temp;
	int x;
	map<string,set<int> > box;
	while(cin>>s>>x)
		box[s].insert(x);
	map<string,set<int> >::iterator ite;
	set<int>::iterator t;
	for(ite=box.begin();ite!=box.end();ite++){
		cout<<ite->first<<endl;
		for(set<int>::iterator se=ite->second.begin();ite->second.end()!=se;se++){
			cout<<*se;
			se++;
			t=se--;
			cout<<(t!=ite->second.end()?' ':'\n');
		}
	}
	return 0;
}
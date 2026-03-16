#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
	map<int,string> blood;
	int n[4],a;
	string b;
	char cn;
	n[3]=n[2]=n[1]=n[0]=0;
	while(cin>>a>>cn>>b){
		blood.insert(make_pair(a,b));
	}
	map<int,string>::iterator it;
	for(it=blood.begin();it!=blood.end();it++){
		if((*it).second=="A") n[0]++;
		else if((*it).second=="B") n[1]++;
		else if((*it).second=="AB") n[2]++;
		else if((*it).second=="O")n[3]++;
	}
	for(int i=0;i<4;i++) cout<<n[i]<<endl;
}
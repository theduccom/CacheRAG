#include <iostream>
#include <utility>
#include <vector>
#include <string>
using namespace std;

int main(void){
	string s[8];
	while(cin>>s[0]){
		std::vector<pair<int,int> > v;
		for(int i=1;i<8;i++)cin>>s[i];
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				if(s[i][j]=='1')v.push_back(make_pair(i,j));
			}
		}
		// second=x,first=y
		if(v[0].first==v[1].first&&v[0].second==v[2].second)cout<<"A"<<endl;
		else if(v[0].second==v[1].second&&v[2].second==v[1].second&&v[2].second==v[3].second)cout<<"B"<<endl;
		else if(v[2].first==v[0].first)cout<<"C"<<endl;
		else if(make_pair(v[0].first+2,v[0].second-1)==v[3])cout<<"D"<<endl;
		else if(make_pair(v[0].first+1,v[0].second+2)==v[3])cout<<"E"<<endl;
		else if(make_pair(v[0].first+2,v[0].second+1)==v[3])cout<<"F"<<endl;
		else cout<<"G"<<endl;
		// cin>>s[0]; // CRLF
	}
}
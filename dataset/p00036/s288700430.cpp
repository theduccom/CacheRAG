#include <iostream>
#include <vector>
using namespace std;
string match(const vector<string> v){
	const string PTN[7][4]{
		{"11","11"},
		{"1","1","1","1"},
		{"1111"},
		{"01","11","10"},
		{"110","011"},
		{"10","11","01"},
		{"011","110"}
	};
	const int PTN_H[7]{2,4,1,3,2,3,2};
	const string PTN_NAME[7]={"A","B","C","D","E","F","G"};
	int ans=-1;
	for(int k=0;k<7;++k){
		int pw=PTN[k][0].size(),ph=PTN_H[k];
		for(int i=0;i<8;++i){
			for(int j=0;j<8;++j){
				if(i+ph<=8&&j+pw<=8){
					bool f=true;
					for(int l=0;l<ph;++l){
						if(PTN[k][l]!=v[i+l].substr(j,pw))f=false;
					}
					if(f){ans=k;break;break;break;}
				}else{
					break;
				}
			}
		}
	}
	return PTN_NAME[ans];
}
int main(){
	for(;;){
		vector<string> surface;
		for(int i=0;i<8;++i){
			string s;
			cin>>s;
			if(s.empty())return 0;
			surface.push_back(s);
		}
		string ans = match(surface);
		cout<<ans<<endl;
		if(cin.eof())break;
	}
	return 0;
}
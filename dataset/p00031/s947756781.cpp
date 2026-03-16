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
	int ta[]={1,2,4,8,16,32,64,128,256,512},n;
	while(cin>>n){
	vector<int>ans(0);
	for(int i=9;i>=0;i--){
	if(n>=ta[i]){ans.push_back(ta[i]);n-=ta[i];}
	}
	reverse(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++){cout<<ans[i];if(i==ans.size()-1)cout<<endl;else cout<<" ";}
	}
	return 0;
}
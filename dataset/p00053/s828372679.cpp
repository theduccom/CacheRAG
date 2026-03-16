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
bool is(int x){
	for(int i=2;i*i<=x;i++)if(x%i==0)return false;
	return true;
}
int main(){
int n;
while(cin>>n,n!=0){
int cnt=0,ans=0;
for(int i=2;;i++){
	if(is(i))cnt++,ans+=i;
	if(cnt==n)break;
}
cout<<ans<<endl;

}

	return 0;
}
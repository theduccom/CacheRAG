#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<vector>
#include<cstdio>
#include<cmath>
#define pb(in,tmp) in.push_back(tmp)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,b) loop(i,0,b)
#define all(in) in.begin(),in.end()
using namespace std;
int main(){
int a,b,c;
while(cin>>a>>b>>c,a||b||c){
vector<int>in;
pb(in,a);
pb(in,b);
pb(in,c);
sort(all(in));
int n;
cin>>n;
rep(i,n){
int a;
cin>>a;
if(a>hypot(in[0]/2,in[1]/2))cout<<"OK"<<endl;
else cout<<"NA"<<endl;
}
}
}
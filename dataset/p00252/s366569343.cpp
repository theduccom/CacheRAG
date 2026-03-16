#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	bool b[3];
	rep(i,3)cin>>b[i];
	if((b[0] && b[1] && !b[2]) || (!b[0] && !b[1] && b[2]))cout<<"Open"<<endl;
	else cout<<"Close"<<endl;
	return 0;
}
#include<iostream>
#include<algorithm>
#include<cstring>
#define loop(i,a,b) for(int i=a ;i < b ; i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(void){
	string a;

	getline(cin,a);
	
	rep(i,a.size())a[i]=toupper(a[i]);
	
	cout<<a<<endl;
	return 0;
}
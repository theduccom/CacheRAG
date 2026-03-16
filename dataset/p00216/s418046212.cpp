#include<iostream>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int w;
	while( cin >> w, w!=-1 ){
		int v = 1150;
		if( w > 30 ){ v+=160*(w-30); w=30; }
		if( w > 20 ){ v+=140*(w-20); w=20; }
		if( w > 10 ){ v+=125*(w-10); }
		cout << (4280-v) << endl;
	}
	return 0;
}
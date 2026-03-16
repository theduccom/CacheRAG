#include <iostream>
#include <vector>
using namespace std;

int p2(int a){
	int ret=0;
	while(a%2==0){ret++;a/=2;}
	return ret;
}
int p5(int a){
	int ret=0;
	while(a%5==0){ret++;a/=5;}
	return ret;
}

int main(){
	int n;
	while(cin >> n && n){
		int t=0,f=0;
		for(int i=2;i<=n;i++){
			t+=p2(i);	
			f+=p5(i);
		}
		cout << min(t,f) << endl;
	}
}
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
	int x,y,z;
	while(1){
		cin >> x >> y >> z;
		if(x+y+z==0) break;
		int a = max(max(x,y),z);
		int b = min(min(x,y),z);
		int c = x+y+z-a-b;
		int l = b*b+c*c;
		int n;
		cin >> n;
		int s;
		for(int i=0;i<n;i++){
			cin >> s;
			if(s*s*4>l) cout << "OK" << endl;
			else        cout << "NA" << endl;
		}
	}
}
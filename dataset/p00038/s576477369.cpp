#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a[5];
	char c;
	while(cin>>a[0]>>c>>a[1]>>c>>a[2]>>c>>a[3]>>c>>a[4]){
		int b[14];
		for(int i=0;i<14;i++) b[i] = 0;
		for(int i=0;i<5;i++) b[a[i]]++;
		int d[5];
		for(int i=0;i<5;i++) d[i] = 0;
		for(int i=0;i<14;i++) d[b[i]]++;
		bool st = false;
		for(int i=1;i<11;i++){
			int z = 1;
			for(int j=i;j<i+5;j++) z *= b[(j-1)%13+1];
			if(z==1) st = true;
		}
		if(d[4]==1) cout << "four card";
		else if(d[3]*d[2]==1) cout << "full house";
		else if(st) cout << "straight";
		else if(d[3]==1) cout << "three card";
		else if(d[2]==2) cout << "two pair";
		else if(d[2]==1) cout << "one pair";
		else cout << "null";
		cout << endl;
	}
}
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	cin.ignore();
	while(n-->0){
		int a[8];
		for(int i=0;i<8;i++) scanf("%1d",&a[i]);
		sort(a,a+8);
		int max = 0;
		int min = 0;
		for(int i=0;i<8;i++){
			int t = a[i];
			if(t!=0) for(int j=0;j<i;j++) t *= 10;
			max += t;
			t = a[7-i];
			if(t!=0) for(int j=0;j<i;j++) t *= 10;
			min += t;
		}
		cout << max-min << endl;
	}
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
string s[]={"one pair","two pair","three card","straight","null"};

int str(int n){
	cout << s[n] << endl;
	return 0;
}

int main(){
	int a[5], t[14], ans, m;
	while(scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4]) != EOF){
		ans = -1, m = 0;
		sort(a, a+5);
		fill(t, t+14, 0);
		for(int i = 0;i < 5;i++){
			t[a[i]]++;
			if(m < t[a[i]])m = t[a[i]];
		}
		
		int flag = 0;
		if(a[0]==1&&a[1]==10&&a[2]==11&&a[3]==12&&a[4]==13){str(3);continue;}
		for(int i = 1;i < 5 && a[i-1]+1 == a[i];i++)flag = i;
		if(flag == 4){str(3);continue;}
		
		if(m == 4){cout << "four card" << endl;continue;}
		if(m == 3){
			int f = 1;
			for(int i = 1;i <= 13;i++){
				if(t[i] == 2)f = 0;
			}
			if(!f){cout << "full house" << endl;continue;}
			ans = 2;
		}
		
		for(int i = 1;i <= 13;i++){
			if(!ans && t[i] == 2)ans = 1;
			if(ans != 1 && t[i] == 2)ans = 0;
		}
		if(ans == -1)ans = 4;
		str(ans);
	}
	return 0;
}
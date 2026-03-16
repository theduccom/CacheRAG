
#include<iostream>
#include<fstream>
#include<sstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;

#define ull unsigned long long
#define ll long long
#define PI 3.141592654

int main(){
	int n;
	while(cin>>n,n){
		int tot = 0;
		int  i = 5;
		while( i <= n){
			tot += n/i;
			i *= 5;
		}
		cout<<tot<<endl;
	}
	return 0;
}
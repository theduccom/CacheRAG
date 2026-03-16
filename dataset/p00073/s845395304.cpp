#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<map>
#include<functional>
#include<stack>
#include<list>
#include<set>
#include<deque>
#include<climits>
using namespace std;

int main(){
	double X,H;
	while(cin>>X>>H,X||H){
		printf("%lf\n",X*X+X*sqrt(X*X/4+H*H)*2);
	}
	return 0;
}
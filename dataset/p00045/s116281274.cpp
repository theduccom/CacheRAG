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
	int a,b;
	int kane = 0,suu = 0,read = 0;
	while(scanf("%d,%d",&a,&b)==2){
		kane += a*b;
		suu += b;
		read++;
	}
	cout<<kane<<endl;
	if(suu*1.0/read - suu/read >= 0.5){
		cout<<suu/read+1<<endl;
	}else{
		cout<<suu/read<<endl;
	}
	return 0;
}
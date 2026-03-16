#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int w,c[]={125,140,160};

int main(){
	while(cin>>w){
		if(w==-1)return 0;
		if(w<=10)cout<<3130<<endl;
		else{
			w-=10;
			int p=0,C=1150;
			while(p<2&&w>10){C+=c[p]*10;p++;w-=10;}
			C+=c[p]*w;
			cout<<4280-C<<endl;
		}
	}
}
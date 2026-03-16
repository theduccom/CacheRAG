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
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;

int power(int b,int e,int p){
	int ret = 1;
	while(e>0){
		if((e&1)!=0){	
			ret = (ret*b)%p;
		}
		b = (b*b)%p;
		e>>=1;
	}
	return ret%p;
}

bool fermat(int p){
	if(p<=1)return false;
	if(p!=2 && p%2==0)return false;
	if(p!=3 && p%3==0)return false;
	if(p!=5 && p%5==0)return false;
	if(p!=7 && p%7==0)return false;
	if(p!=11 && p%11==0)return false;

	for(int x=0;x<100;++x){
		int a = rand()%(p-1)+1;
		if(power(a,p-1,p)!=1)return false;
	}
	return true;
}
int main(){
	int n;
	while(scanf("%d",&n)==1,n){
		if(n%2==0)n--;
		while(n>=5){
			if(fermat(n) && fermat(n-2)){
				cout<<n-2<<" "<<n<<endl;
				break;
			}
			n-=2;	
		}
	}
	return 0;

}
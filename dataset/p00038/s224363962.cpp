#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)

static const double PI=6*asin(0.5);
typedef complex<double> P;
typedef long long ll;


int a[5]={0};
int c[14]={0};
int node;
char t;
int tmp;

int main(){
	while(cin>>tmp){
		c[tmp]++;
		rep(i,4){
			cin>>t>>tmp;
			c[tmp]++;
		}
		rep(i,14){
			a[c[i]]++;
		}
		bool str=false;
		rep(i,10){
			if(c[i]==1){
				rep(j,4){
					if(c[i+j+1]!=1){
						str=false;
						break;
					}
					else if(j==3) str=true;
				}
				break;
			}
		}
		//rep(i,13) cout<<c[i+1]<<" ";
		//cout<<endl;
		if(c[1]==1&&c[10]==1&&c[11]==1&&c[12]==1&&c[13]==1) str=true;
		if(a[4]==1) cout<<"four card\n";
		else if(a[3]==1&&a[2]==1) cout<<"full house\n";
		else if(str) cout<<"straight\n";
		else if(a[3]==1) cout<<"three card\n";
		else if(a[2]==2) cout<<"two pair\n";
		else if(a[2]==1) cout<<"one pair\n";
		else cout<<"null\n";
		
		rep(i,14) c[i]=0;
		rep(i,5) a[i]=0;
	}
	return 0;
}
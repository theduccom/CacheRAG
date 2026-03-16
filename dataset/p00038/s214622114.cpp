#define	_USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <set>
#include <complex>
#define  rep(i,n) for(int i=0;i<(n);i++)
#define  REP(i,n) for(int i=1;i<(n);i++)
#define  rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define  VI	vector<int>
#define	 VS vector<string>
#define  all(a) (a).begin(),(a).end()
#define  debug(x) cout<<#x<<": "<<x<<endl

using namespace std;
int main(){
	
	int a[5];
	
	while(~scanf("%d,%d,%d,%d,%d,",&a[0],&a[1],&a[2],&a[3],&a[4])){
		vector<int> p(15,0);
		bool f=false;
		rep(i,5){
			if(a[i]==1){
				p[14]++;
			}
			p[a[i]]++;
		}
		if(find(p.begin(),p.end()-1,4)!=p.end()-1){
			cout<<"four card"<<endl;
			f=true;
		}
		else if(find(p.begin(),p.end()-1,3)!=p.end()-1&&find(p.begin(),p.end()-1,2)!=p.end()-1){
			cout<<"full house"<<endl;
			f=true;
		}
		else{
			rep(i,5){
				if(a[i]>=1&&a[i]<=10){
					if(p[a[i]]==1&&p[a[i]+1]==1&&p[a[i]+2]==1&&p[a[i]+3]==1&&p[a[i]+4]==1){
						cout<<"straight"<<endl;
						f=true;
						break;
					}
				}
				
			}
		}
			if(!f){
				if(find(p.begin(),p.end()-1,3)!=p.end()-1)
					cout<<"three card"<<endl;
				else{
					int point =0;
				REP(i,14){
					if(p[i]==2)
						point++;
				}
					if(point>=2)
						cout<<"two pair"<<endl;
					else if(point==1)
						cout<<"one pair"<<endl;
					else
						cout<<"null"<<endl;
				}
			}
		
	}
	
}
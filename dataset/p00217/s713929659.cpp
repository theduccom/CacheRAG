#include<iostream>
#include<utility>
#include<algorithm>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
typedef pair<int,int> pii;

int main(){
	int n,d1,d2,num;
	while(cin>>n,n){
		pii patient[n];
		rep(i,n){
			cin>>num>>d1>>d2;
			patient[i]=pii(d1+d2,num);
		}
		sort(patient,patient+n);
		cout<<patient[n-1].second<<" "<<patient[n-1].first<<endl;
	}	
	return 0;
}
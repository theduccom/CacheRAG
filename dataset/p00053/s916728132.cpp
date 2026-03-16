#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long int lli;
vector<lli> p;
int main(void){
	bool ps[200000];
	for(int i=0;i<200000;i++)ps[i]=true;
	ps[0]=ps[1]=false;
	p.push_back(0);
	for(int i=2;i<200000;i++){
		if(ps[i]){
			for(int j=2*i;j<200000;j+=i) ps[j]=false;
			p.push_back(i+p[p.size()-1]);
			if(p.size()==10001)break;
		}
	}
	int n;
	while(cin>>n,n){
		cout<<p[n]<<endl;
	}
}
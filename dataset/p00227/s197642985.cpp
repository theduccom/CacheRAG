#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
  int n,m;
  while(cin>>n>>m, n||m){
    vector<int> p(n);
    for(int i=0;i<n;++i) cin>>p[i];
    sort(p.begin(), p.end(), greater<int>());
    int sum=0,tmp=0;
    for(int i=0;i<n-(n%m);++i){
    	tmp+=p[i];
    	if(i%m==m-1){
    		sum+=tmp-p[i];
    		tmp=0;
    	}
    }
    for(int i=n-(n%m);i<n;++i)sum+=p[i];
    cout<<sum<<endl;
  }
}
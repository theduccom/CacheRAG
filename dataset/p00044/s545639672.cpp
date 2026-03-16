#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool ary[60010];
int main(){
	vector<int> prm;
	for(int i=2;i<=60000;i++){
		if(!ary[i]){
			prm.push_back(i);
			for(int j=i+i;j<=60000;j+=i){
				ary[j]=true;
			}
		}
	}
	int N,ma,mi;
	vector<int>::iterator it;
	while(cin>>N){
		it=upper_bound(prm.begin(),prm.end(),N);
		ma=(*it);
		while((*it)>=N) it--;
		mi=(*it);
		cout<<mi<<" "<<ma<<endl;
	}
	return 0;
}
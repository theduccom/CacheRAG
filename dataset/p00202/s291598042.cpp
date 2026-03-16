#include <iostream>
#include <vector>
#include <queue>
using namespace std;
bool prime[1000001];
bool isReach[1000001];
int main() {
	// your code goes here
	
	vector<int> p;
	p.push_back(2);
	prime[2]=true;
	for(int i=3;i<=1000000;i++){
		for(int j=0;j<p.size();j++){
			if(i%p[j]==0)
			break;
			if(p[j]*p[j]>i ||p.size()-1==j){
			p.push_back(i);
			prime[i]=true;
			break;
			}
		}
	}
	int n,budget,tmp;
	while(cin >> n >> budget && n){
		for(int i=0;i<=1000000;i++)
		isReach[i]=false;
		vector<int> cooks;
		queue<int> qu;
		for(int i=0;i<n;i++){
			cin >> tmp;
			cooks.push_back(tmp);
		}
		qu.push(0);
		int maxim=0;
		while(!qu.empty()){
			int f=qu.front();
			qu.pop();
			if(prime[f])
			maxim=max(maxim,f);
			for(int i=0;i<cooks.size();i++)
				if(f+cooks[i]<=budget && (!isReach[f+cooks[i]])){

					qu.push(f+cooks[i]);
					isReach[f+cooks[i]]=true;
				}
		}
		if(maxim)
		cout << maxim << endl;
		else
		cout << "NA" << endl;
	}
	return 0;
}
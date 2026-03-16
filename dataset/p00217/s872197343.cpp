#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<functional>
using namespace std;
typedef pair<int,int> P;
int main(){
	int n,p,x,y;
	while(cin>>n,n){
		priority_queue<P> vec;
		for(int i=0;i<n;i++){
			cin>>p>>x>>y;
			vec.push(P(x+y,p));
		}
		P now=vec.top();
		cout<<now.second<<' '<<now.first<<endl;
	}
	return 0;
}
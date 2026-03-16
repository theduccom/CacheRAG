#include <iostream>
#include <vector>
using namespace std;

int main(){
	int w, g[10];
	vector<int> ans;

	for(int i=0,j=1 ; j<=512 ; j*=2, i++){
		g[i] = j;
	}

	while(cin >> w){
		ans.clear();
		for(int i=9 ; i>=0 ; i--){
			if(w<=1){
				if(w==1)ans.push_back( w ); 
				break;
			}
			else if(g[i]<=w){
				w -= g[i];
				ans.push_back( g[i] ); 
			}
		}
		for(int i=ans.size()-1 ; i>=0 ; i--){
			cout << ans[i] ;
			if(i==0) cout << endl;
			else cout << " ";
		}
	}
	
	return 0;
}
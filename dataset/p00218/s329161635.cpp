#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(void)
{
	vector< vector<int> > p( 10000,vector<int>(3) );
	vector<char> ans(10000);
	int n;
	while(1){
		cin >> n;
		if(n==0) break;
		for(int i=0;i<n;i++){
			cin >> p[i][0] >> p[i][1] >> p[i][2];
			if(p[i][0]==100||p[i][1]==100||p[i][2]==100) ans[i]='A';
			else if(90*2<=p[i][0]+p[i][1]) ans[i]='A';
			else if(80*3<=p[i][0]+p[i][1]+p[i][2]) ans[i]='A';
			else if(70*3<=p[i][0]+p[i][1]+p[i][2]) ans[i]='B';
			else if(50*3<=p[i][0]+p[i][1]+p[i][2]&&(80<=p[i][0]||80<=p[i][1])) ans[i]='B';
			else ans[i]='C';
		}
		for(int i=0;i<n;i++) cout << ans[i] << endl; 
	}
	return 0;
}
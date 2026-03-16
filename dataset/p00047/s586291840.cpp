//0047
#include <bits/stdc++.h>
using namespace std;

int main(){
	int ans[3] = {1,0,0},p,q;
	char tmp[3];
	while(cin>>tmp[0]>>tmp[1]>>tmp[2]){
		p = (int)tmp[0] - 'A';
		q = (int)tmp[2] - 'A';
		swap(ans[p],ans[q]);
	}
	if(ans[0] == 1)
		cout<<'A'<<endl;
	else if(ans[1] == 1)
		cout<<'B'<<endl;
	else
		cout<<'C'<<endl;

	return 0;
}
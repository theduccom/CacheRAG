#include<iostream>
using namespace std;

int main(){
	char a;
	int l[3];
	int ans[2] = {0};


	while(cin >> l[0] >> a >> l[1] >> a >> l[2]){
		if(l[2] * l[2] == l[0] * l[0] + l[1] * l[1])
			ans[0]++;
		else if(l[0] == l[1])
			ans[1]++;
	}

	cout << ans[0] << endl << ans[1] << endl;
}
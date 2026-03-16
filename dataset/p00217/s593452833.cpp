
#include<iostream>
using namespace std;

int N;
int d[10001];
int ans[100][2];

int main(){
	int i,j;
	for(i = 0;cin >> N;i++){
		if(N == 0)
			break;
		for(j = 0;j < 10001;j++){
			d[j] = 0;
		}
		for(j = 0;j < N;j++){
			int p,d1,d2;
			cin >> p >> d1 >> d2;
			d[p] = d1 + d2;
		}
		for(j = 0;j < 10001;j++){
			if(d[j] > ans[i][1] ){
				ans[i][1] = d[j];
				ans[i][0] = j;
			}
		}
	}
	for(j = 0;j < i;j++){
		cout << ans[j][0] << " " << ans[j][1] << endl;
	}
	return 0;
}
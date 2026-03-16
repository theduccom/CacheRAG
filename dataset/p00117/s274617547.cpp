#include <iostream>
#include <cstring>
using namespace std;

int n,m;
int t[22][22];

int main(void){
	memset(t,-1,sizeof(t));
	cin>>n>>m;
	for(int i=0;i<m;i++){
		char ch;
		int a,b,c,d;
		cin>>a>>ch>>b>>ch>>c>>ch>>d;
		a--;
		b--;
		t[a][b] = c;
		t[b][a] = d;
	}
	char ch;
	int s,d,x,y;
	cin>>s>>ch>>d>>ch>>x>>ch>>y;
	s--;
	d--;

	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i == j || t[i][k] == -1 || t[k][j] == -1){
					continue;
				}
				if(t[i][j] == -1 || t[i][j] > t[i][k] + t[k][j]){
					t[i][j] = t[i][k] + t[k][j];
				}
			}
		}
	}

	cout<<x - y - t[s][d] - t[d][s]<<endl;

	return 0;
}
#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n;
	int num;
	int sum, dsum;
	int i, j;
	while(true){
		cin>>n; if(n==0)break;
		vector< vector<int> > v(n+1, vector<int>(n+1));
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cin>>num;
				v[i][j] = num;
			}
		}
		for(i=0;i<n;i++){
			sum=0;
			for(j=0;j<n;j++){
				sum+=v[i][j];
			}
			v[i][n]=sum;
		}
		dsum=0;
		for(j=0;j<n;j++){
			sum=0;
			for(i=0;i<n;i++){
				sum+=v[i][j];
			}
			v[n][j]=sum;
			dsum+=v[n][j];
		}
		v[n][n]=dsum;
		for(i=0;i<n+1;i++){
			for(j=0;j<n+1;j++){
				cout.width(5);
				cout<<v[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}
#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main(){
  int n;
  while(cin >> n,n){
    vector< vector<int> > v(n,vector<int>(n));
    
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
	cin >> v[i][j];
      }
    }
  
    vector<int> sum(n+1,0);
    for(int i=0;i<n;i++){
      int tmp = 0;
      for(int j=0;j<n;j++){
	tmp += v[i][j];
	sum[j] += v[i][j];
      }
      v[i].push_back(tmp);
      sum[n] += tmp;
    }
    v.push_back(sum);
    
    for(int i=0;i<n+1;i++){
      for(int j=0;j<n+1;j++){
	cout << setw(5) << v[i][j];
      }
      cout << endl;
    }
  }
}
#include<iostream>
#include<vector>
using namespace std;

inline void prime(int *p, int n){

  fill(p, p+n, 1);

  p[0] = 0;
  p[1] = 0;
  for(int i=2; i<=n; i++){
    for(int j=2; i*j<=n; j++){
      p[i*j] = 0;
    }
  }

}

int main(){

	int cnt, p[105001], sum, n;
	vector<int> vc;

	prime(p, 105000);
	cnt = 0;
	sum = 0;

	for(int i=0; cnt<=10000; i++){
		if(p[i] == 1){
			sum += i;
			vc.push_back(sum);
			cnt++;
		}
	}

	while(cin >> n){	
		if(n == 0) break;
		cout << vc[n-1] << endl;
	}

	return 0;

}
#include <iostream>
using namespace std;

int n;
int cnt;
int p[10000];
int d1, d2;
int p_sum[10000];
int p_max = 0;
int m_sum;
int p_i;

int main(){
	while(true){
		cin >> n;
		if(n == 0) break;
		for(int i = 0; i < n; i++){
			cin >> p[i] >> d1 >> d2;
			p_sum[i] = d1 + d2;
		}
		
		p_max = p_sum[0];
		for(int i = 0; i < n; i++){
			if(p_max < p_sum[i]){
				p_max = p_sum[i];
				p_i = i;
			}	
		}
		cout << p[p_i] << " " << p_max << endl;	
		p_i = 0;
	}
}
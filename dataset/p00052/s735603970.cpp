#include<iostream>
#include<algorithm>
using namespace std;

int ans[20010][2] = {};

void calc(){
	
	for( int i=1 ; i<=20000 ; i++ ){
		ans[i][0] += ans[i-1][0] ;
		ans[i][1] += ans[i-1][1] ;
		
		int tmp = i;
		while( tmp>0 ){
			if( !(tmp%5) ){
				ans[i][0]++;
				tmp /= 5;
			}
			else if( !(tmp%2) ){
				ans[i][1]++;
				tmp /= 2;
			}
			else break;
		}
	}
	
}

int main(){
	
	calc();
	
	int N;
	while( cin >> N , N ){
		cout << min(ans[N][0],ans[N][1]) << endl ;
	}
	
	return 0;
}
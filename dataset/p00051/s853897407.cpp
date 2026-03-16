#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
int main()
{
	int N;
	cin >> N;
	while(N--){
		int num[8];
		int numchar;
		int max=0;
		int min=0;
		cin >> numchar;
		REP(i,8){
			num[i] = numchar%10;
			numchar /= 10;
		}
		sort(num , num+8);
		REP(i,8){
			max += num[i]*pow(10,(double)i);
		}
		REP(i,8){
			min += num[7-i] * pow(10,(double)i);
		}
		cout << max - min << endl;
	}
	return 0;
}
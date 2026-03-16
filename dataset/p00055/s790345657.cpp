#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include <bitset>
#define INF	100000000
#define pb	push_back
#define fi first
#define sec second
#define SS stringstream
using namespace std;
typedef pair<int, int> P;
typedef long long int	ll;

double a;

int main(){
	while(cin >> a){
		double s = a;
		for(int i = 2; i <= 10; i++){
			if(i%2 == 0){
				a *= 2;
				s += a;
			}
			else{
				a = a/3;
				s += a;
			}
		}
		printf("%0.9f\n", s);
	}
}
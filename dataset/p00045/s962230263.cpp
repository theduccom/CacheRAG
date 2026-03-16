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

int main(){
	ll money = 0, amount = 0, ave;
	int temp1, temp2, t = 0;
	char trash;
	while(cin >> temp1 >> trash >> temp2){
		t++;
		money += temp1*temp2;
		amount += temp2;
	}
	ave = (int)(((double)amount/(double)t)+0.5);
	cout << money << endl;
	cout << ave << endl;
}
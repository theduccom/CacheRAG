#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <math.h>
#include <functional>
#include <algorithm>
#include <utility>

typedef long long Int;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
#define REPS(a,i,n) for(int i = a ; i < n ; ++i)
using namespace std;




int main(){


	int n,m;
	while (cin >> n){
		stack<int> stack;
		m = 512;
		while (m){
			if (n >= m){
				stack.push(m);
				n -= m;
			}
			m /= 2;
		}
		int k(0);
		if (!stack.empty()){
			k += stack.top();
			cout << stack.top();
			stack.pop();
		}
		while (!stack.empty()){
			cout << " ";
			k += stack.top();
			cout << stack.top();
			stack.pop();
		}
		cout << endl;
	}
	return 0;
}
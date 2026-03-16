#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
#define ALL(v) v.begin(), v.end()

string calc(string a, string b);

int main()
{
	int n;
	string a,b;
	scanf("%d", &n);
	
	while(n--){
		cin >> a >> b;
		cout << calc(a,b) << endl;
	}
	return(0);
}

string calc(string a, string b)
{
	reverse(ALL(a));
	reverse(ALL(b));
	
	while(a.size() < b.size()) a += '0';
	while(b.size() < a.size()) b += '0';
	
	int c = 0;
	string res;
	
	for(int i = 0; i < a.size(); i++){
		c = c+a[i] - '0' + b[i] - '0';
		res += c%10 + '0';
		c /= 10;
	}
	if(c)res += c + '0';
	if(res.size() > 80) return "overflow";
	reverse(ALL(res));
	return res;
}
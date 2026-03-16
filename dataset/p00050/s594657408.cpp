#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <queue>
#include <climits>
#include <map>
#include <stack>
using namespace std;
#define M_PI 3.141592
#define toRad 2.0*M_PI/360.0
#define inin(x) int x;cin>>x;
#define all(x) x.begin(),x.end()
#define debug(x) cout<<#x<<" "<<x<<endl;
#define rep(i,n) for(int i=0;i<(int)n;i++)
typedef pair<int, int> pii;
#define a s[i]
#define b s[i+1]
#define c s[i+2]
#define d s[i+3]
#define e s[i+4]

int main()
{
	string s;
	getline(cin, s);
	while (s.find("apple", 0) != -1)
	{
		s.replace(s.find("apple", 0), 5, "*****");
	}
	while (s.find("peach", 0) != -1)
	{
		s.replace(s.find("peach", 0), 5, "apple");
	}
	while (s.find("*****", 0) != -1)
	{
		s.replace(s.find("*****", 0), 5, "peach");
	}
	cout << s << endl;
}
#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int>P;

int main() {
	string s; getline(cin, s);
	if (s == "1 0 0")puts("Close");
	if (s == "0 1 0")puts("Close");
	if (s == "1 1 0")puts("Open");
	if (s == "0 0 1")puts("Open");
	if (s == "0 0 0")puts("Close");
}
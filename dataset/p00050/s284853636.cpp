#include <bits/stdc++.h>

#define loop(v, f, l) for(int v = (f), v##_ = (l); v < v##_; ++v)

using namespace std;

typedef long long int lint;
static inline int in(){ int x; scanf("%d", &x); return (x); }
static inline lint inl(){ lint x; scanf("lld", &x); return (x); }

string replace(string input, string str1, string str2)
{
	string::size_type pos(input.find(str1));

	while(pos != string::npos)
	{
		input.replace(pos, str1.length(), str2);
		pos = input.find(str1, pos + str2.length());
	}

	return input;
}

int main()
{
	string str;
	getline(cin, str);
	size_t pos = 0;
	
	str = replace(str, "apple", "PEACH");
	str = replace(str, "peach", "apple");
	str = replace(str, "PEACH", "peach");

	cout << str << endl;

	return (0);
}
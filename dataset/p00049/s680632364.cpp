#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

vector<string> split(const string &str, char delim){
  vector<string> res;
  size_t current = 0, found;
  while((found = str.find_first_of(delim, current)) != string::npos){
    res.push_back(string(str, current, found - current));
    current = found + 1;
  }
  res.push_back(string(str, current, str.size() - current));
  return res;
}


int main()
{
	string s;
	int a[4];
	memset(a,0,sizeof(a));
	while(cin >> s)
	{
		vector<string> _s = split(s,',');
		if(_s[1] == "A") a[0]++;
		if(_s[1] == "B") a[1]++;
		if(_s[1] == "AB") a[2]++;
		if(_s[1] == "O") a[3]++;
	}

	rep(i,4) cout << a[i] << endl;

	return 0;
}
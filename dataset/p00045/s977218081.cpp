#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>
#include <cstdlib>

#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back

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
	int sum = 0;
	vector<int> num;

	string s;
	while(cin >> s)
	{
		vector<string> _s = split(s,',');
		int temp = atoi(_s[0].c_str());
		int temp2 = atoi(_s[1].c_str());
		sum += temp*temp2;
		num.pb(temp2);
	}

	double num_sum = 0;
	rep(i,num.size())
	{
		num_sum += num[i];
	}
	cout << sum << endl;
	cout << (int)(num_sum/num.size() + 0.5) << endl;

	return 0;
}
#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

int caesar(string s)
{
	string s0 = "this";
	string s1 = "that";
	string s2 = "the";

	for (int i = 0; i < 26; i++)
	{
		if (s == s0 || s == s1 || s == s2 || s == s0 + "." || s == s1 + "." || s == s2 + ".")
		{
			return i;
		}
		for (int j = 0; j < 4; j++)
		{
			s0.at(j)++;
			if (s0.at(j) > 'z')
			{
				s0.at(j) = 'a';
			}
			s1.at(j)++;
			if (s1.at(j) > 'z')
			{
				s1.at(j) = 'a';
			}
		}
		for (int j = 0; j < 3; j++)
		{
			s2.at(j)++;
			if (s2.at(j) > 'z')
			{
				s2.at(j) = 'a';
			}
		}
	}

	return -1;
}

int main()
{
	string str;
	for (; getline(cin, str);)
	{
		stringstream ss;
		ss << str;

		vector<string> w;
		string s;
		int c = -1;
		for (; ss >> s;)
		{
			w.push_back(s);
			
			if (c == -1)
			{
				c = caesar(s);
			}
		}

		for (int i = 0; i < w.size(); i++)
		{
			if (c != -1)
			{
				for (int j = 0; j < w.at(i).size(); j++)
				{
					if (w.at(i).at(j) != '.')
					{
						char sp = w.at(i).at(j) - c;
						if (sp < 'a')
						{
							int p = 'a' - sp - 1;
							w.at(i).at(j) = 'z' - p;
						}
						else
						{
							w.at(i).at(j) = sp;
						}
					}
				}
			}

			cout << w.at(i) << (i == w.size() - 1 ? "" : " ");
		}

		cout << endl;
	}
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int r, l;
	int count = 0;
	while (cin >> s){
		if (s.size() == 1){
			r = -1;
		}
		else if (s.size() % 2 == 0){
			r = s.size() / 2 - 1, l = s.size() / 2;
		}
		else{
			r = s.size() / 2 - 1, l = s.size() / 2 + 1;
		}
		bool flag = true;
		while (r != -1){
			if (s[r] == s[l]){
				r--;
				l++;
			}
			else{
				flag = false;
				break;
			}
		}
		if (flag){
			count++;
		}
	}
	cout << count << endl;
}
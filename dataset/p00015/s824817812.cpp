//AOJ 0015

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string s1, s2;
		cin >> s1;
		cin >> s2;
		reverse(s1.begin(), s1.end());
		reverse(s2.begin(), s2.end());
		
		int max;
		int diff;
		if(s1.size() > s2.size()) {
			max = s1.size();
			diff = s1.size() - s2.size();
			for(int i = 0; i < diff; i++)
				s2 += "0";
		}
		else {
			max = s2.size();
			diff = s2.size() - s1.size();
			for(int i = 0; i < diff; i++) {
				s1 += "0";	
			}
		} 
		//cout << s1 << endl;
		//cout << s2 << endl;
		string s;
		int kuriagari = 0;
		for(int i = 0; i < max; i++) {
			int flag = true;
			if((s1[i]-'0')+(s2[i]-'0') + kuriagari >= 10) flag = false;
			s += ((s1[i]-'0')+(s2[i]-'0')+kuriagari) % 10 + '0';
			if(flag == true) kuriagari = 0;
			else kuriagari = 1;
		}
		if(kuriagari == 1) s += "1";
		reverse(s.begin(), s.end());
		if(s.size() > 80) cout << "overflow" << endl;
		else {
			cout << s << endl;
		}
	} 
	return 0;
}
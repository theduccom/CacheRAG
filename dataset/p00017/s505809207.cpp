#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	while (getline(cin, str)) {
		string st = str;
		string s[1000],h="";
		str += " ";
		int c = 0;
		for (int i = 0; i < str.length(); i++) {
			for (int j = i; j < str.length(); j++) {
				if (str[j] == '.' || str[j] == ' ') {
					if (h != "") {
						s[c] = h;
						h = "";
						c++;
					}
					i = j ;
					break;
				}
				else
					h += str[j];
			}
		}
		int w = 0;
		for (int i = 0; i < c; i++) {
			if (s[i].length() == 3 || s[i].length() == 4) {
				int t = (int)'t' - (int)s[i][0];
				string h = "t";
				for (int j = 1; j < s[i].length(); j++) {
					int u = t + (int)s[i][j];
					if (u > 'z') u -= 26;
					else if (u < 'a') u += 26;
					h += (char)u;
				}
				if (h == "the" || h == "that" || h == "this") {
					w = t;
					break;
				}
			}
		}
		string stri = "";
		for (int i = 0; i < st.length(); i++) {
			if (st[i] == ' ' || st[i] == '.')
				stri += st[i];
			else {
				int u;
				u = (int)st[i] + w;
				if (u > 'z') u -= 26;
				else if (u < 'a')u += 26;
				stri += (char)u;
			}
		}
		cout << stri << endl;
	}
}
#include <iostream>

using namespace std;
/** Problem0063 : Palindrome **/
int main()
{
	string s;
	int len, ans=0;
	
	while (cin >> s) {
		len = (int)s.length();
		for (int i=0; i<len/2; i++) {
			if (s[i] != s[len-i-1]) {
				goto end;
			}
		}
		ans++;
	end: ;
	}
	cout << ans << endl;
}
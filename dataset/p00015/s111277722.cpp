#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1, str2, ans;
	int n;

	cin >> n;

	for (int i=0; i<n; i++)
	{
		bool cryflag = false,	//trueのとき繰り上がり
		     overflag = false;	//trueのときoverflow
		ans.clear();
		cin >> str1 >> str2;

		int len1 = str1.size(), len2 = str2.size();

		for (int j=0, k=0; j<len1 || k<len2; j++, k++) {
			int c1 = 0, c2 = 0, c;

			if(j < len1)
				c1 = str1[len1-j-1] - '0';
			if(k < len2)
				c2 = str2[len2-k-1] - '0';

			//cout << len1 << len2;	//Debug

			c = c1 + c2;

			if(cryflag) {
				c++;
				cryflag = false;
			}

			if(c>=10)	cryflag = true;

			ans += c%10 + '0';

			//cout << len1 << len2;	//Debug

			if(ans.size() > 80 || (ans.size() == 80 && cryflag))	{
				overflag = true;
				break;
			}
		}

		if(overflag) {
			cout << "overflow";
		}
		else {
			if(cryflag)	cout << "1";
			for (int i=0; i<(int)ans.size(); i++) {
				cout << ans[ans.size()-i-1];
			}
		}

		cout << endl;
	}

	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

// ツ閉カツ篠堋療アツづ個青板篠堋づ個堕ォツつオツ算ツづーツ行ツつ、
string add (string a, string b)
{
	reverse (a.begin(), a.end() );
	reverse (b.begin(), b.end() );

	while (a.length() != b.length()){
		if (a.length() > b.length()){
			b += '0';
		}else if (a.length() < b.length() ){
			a += '0';
		} // end if
	} // end while
	
	int i;
	string res = "";
	int carry = 0;
	
	for (i = 0; i < a.length(); ++i){
	
		int an = a[i] - '0';
		int bn = b[i] - '0';
		int sum = an + bn + carry;
	
		res += sum % 10 + '0';
		carry = sum/10;

	} // end for
	
	if (carry == 1){
		res += carry + '0';
	} // end if

	reverse (res.begin(), res.end() );
	
	return res;
}

int main()
{
	string str = "";
	int n;

	getline (cin, str );
	stringstream ssn(str);
	ssn >> n;

	int i;
	for (i = 0; i < n; ++i){
		string a,b;
		string res = "";

		getline (cin, a);
		getline (cin, b);

		res = add (a, b);

		if (res.length() > 80){
			cout << "overflow" << endl;
		}else{
			cout << res << endl;
		} // end if		
	} // end for

	return 0;
}
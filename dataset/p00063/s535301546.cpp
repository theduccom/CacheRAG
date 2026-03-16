#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const* argv[])
{
	string str;
	string hoge;

	int count = 0;
	while( cin >> str ){
		hoge = str;
		reverse( hoge.begin(), hoge.end() );
		if( hoge == str ) count++;
	}
	cout << count << endl;

	return 0;
}
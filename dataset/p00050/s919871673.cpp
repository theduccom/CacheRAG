#include <iostream>
#include <vector>
#include <string>
#include <sstream>
//#include <fstream>
using namespace std;

int main()
{
	const string w[] = { "apple", "peach" };
	const string t[] = { "_ALE_", "_PEH_" };
//	cut here before submit 
//	freopen("testcase.applepeach", "r", stdin);
	string str = "";
	int i;

	while (getline (cin, str ) ){
		if (str.empty() ){
			break;
		} // end if
//		vector <int> dot;
//		vector <int> camma;
		int i;
/*
		while ( str.find ('.') != string::npos ){
			dot.push_back ((int)str.find('.') );
			str.replace (str.find('.'), 1, " " );
		} // end while
		while ( str.find (',') != string::npos ){
			camma.push_back ((int)str.find(',') );
			str.replace (str.find (','), 1, " " );
		} // end while
*/
		// replace words
		for (i = 0; i < 2; ++i){
			while (str.find(w[i]) != string::npos ){
				str = str.replace (str.find(w[i]), w[i].length(),t[i] );
			} // end while
		} // end for

		// transform words
		for (i = 0; i < 2; ++i){
			while (str.find(t[i]) != string::npos ){
				str = str.replace (str.find(t[i]), t[i].length(),w[1-i] );
			} // end while
		} // end for
/*
		if (!dot.empty() ){
			for (i = 0; i < dot.size(); ++i){
				str = str.replace (dot[i], 1, "." );
			} // end for
		} // end if
		if (!camma.empty() ){
			for (i = 0; i < camma.size(); ++i){
				str = str.replace (camma[i], 1, "," );
			} // end for
		} // end if
*/
		cout << str << endl;
	} // end loop
		
	return 0;
}
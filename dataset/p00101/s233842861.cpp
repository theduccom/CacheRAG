#include <iostream>
#include <vector>
#include <sstream>
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;


int main()
{
	const string src = "Hoshino";
	const string des = "Hoshina";

	int n;
	string in;
	getline (cin, in );
	stringstream ss (in );
	ss >> n;
	vector <string> str (n );
	rep (i, n ){
		getline (cin, str[i] );
	} // end rep
	rep (i, n ){
		while (str[i].find (src ) != string::npos ){
			 str[i] = str[i].replace (str[i].find (src ), des.length(), des );
		} // end while
	} // end 
	rep (i, n ){
		cout << str[i] << endl;
	} // end rep
		
	return 0;
}
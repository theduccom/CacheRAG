#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	vector<double> mts;
	double in;
	string str;
	while( getline(cin, str), str.size() ){
		sscanf( str.c_str(), "%lf", &in );
		mts.push_back(in);
	}
	sort( mts.begin(), mts.end() );
	double out = mts[mts.size()-1] - mts[0];
	cout << out << endl;
	return 0;
}
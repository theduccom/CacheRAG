#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	string apple = "apple";
	string peach = "peach";
	string target;

	vector<int> pos1;
	vector<int> pos2;

	getline( cin, target );
	pos1.push_back( -5 );

	for( int i = 0;pos1[i] != string::npos;i++ ){
		pos1.push_back( target.find( apple, pos1[i] + 5 ) );
	}
	pos2.push_back( -5 );

	for( int i = 0;pos2[i] != string::npos;i++ ){
		pos2.push_back( target.find( peach, pos2[i] + 5 ) );
	}

	for( int i = 1;pos1[i] != string::npos;i++ ){
		target.replace( pos1[i], peach.size(), peach );
	}
	for( int i = 1;pos2[i] != string::npos;i++ ){
		target.replace( pos2[i], apple.size(), apple );
	}
	
	cout << target << endl;

	return 0;
}
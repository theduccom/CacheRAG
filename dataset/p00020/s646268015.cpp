#include <iostream>
#include <algorithm>
#include <functional>
#include <string>

using namespace std;

int main(int argc, char const* argv[])
{
	string target;

	getline( cin, target );

	for( int i = 0;i < target.size();i++ ){
		if( target[i] >= 'a' && target[i] <= 'z' ) target[i] += ('A' - 'a' );
	}

	cout << target << endl;

	return 0;
}
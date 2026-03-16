#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const* argv[])
{
	string input_string;
	string answer;

	while( cin >> input_string ){
		answer.clear();
		for( unsigned int i = 0;i < input_string.size();i++ ){
			if( input_string[i] != '@' ) answer.append( 1, input_string[i] );
			else {
				answer.append( input_string[i + 1] - '0', input_string[i + 2] );
				i += 2;
			}
		}
		cout << answer << endl;
	}
	return 0;
}
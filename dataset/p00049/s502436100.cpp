#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int answer[4];
	int a;
	char comma;
	string input;

	for( int i = 0;i < 4;i++ ) answer[i] = 0;
	while( cin >> a >> comma >> input ){
		if( input == "A" ) answer[0]++;
		else if( input == "B" ) answer[1]++;
		else if( input == "AB" ) answer[2]++;
		else if( input == "O" ) answer[3]++;
	}

	for( int i = 0;i < 4;i++ ){
		cout << answer[i] << endl;
	}

	
	return 0;
}
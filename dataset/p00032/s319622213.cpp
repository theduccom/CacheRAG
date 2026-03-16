#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
	int e1,e2,e3;
	int hisi = 0;
	int tyou = 0;
	char comma;

	while( cin >> e1 >> comma >> e2 >> comma >> e3 ){
		if( e1 == e2 ) hisi++;
		else if( e1 * e1 + e2 * e2 == e3 * e3 ) tyou++;
	}

	cout << tyou << endl;
	cout << hisi << endl;

	return 0;
}
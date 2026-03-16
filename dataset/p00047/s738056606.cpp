#include<iostream>
#include<string>
using namespace std;

int main(){
	string in;
	int cup[3] = {1,0,0};
	while( getline(cin,in), in.length() ){
		char ex1, ex2;
		sscanf( in.c_str(), "%c,%c", &ex1, &ex2 );
		ex1 -= 'A';
		ex2 -= 'A';
		int tmp = cup[ex1];
		cup[ex1] = cup[ex2];
		cup[ex2] = tmp;
	}
	for( int i=0; i<3; i++ )
		if( cup[i] )
			cout << (char)(i+'A') << endl;
	return 0;
}
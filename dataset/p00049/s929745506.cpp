#include<iostream>
#include<string>
using namespace std;

int main(){
	string in;
	int a=0, b=0, o=0, ab=0;
	while( getline(cin, in), in.length() ){
		char blood[3] = "";
		int n;
		sscanf( in.c_str(), "%d,%s", &n, blood);
		if( blood[0] == 'A' && blood[1] == 'B' )	ab++;
		else if( blood[0] == 'B' )	b++;
		else if( blood[0] == 'O' )	o++;
		else if( blood[0] == 'A' )	a++;
	}
	cout << a << endl;
	cout << b << endl;
	cout << ab << endl;
	cout << o << endl;
	return 0;
}
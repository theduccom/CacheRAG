#include<iostream>
#include<string>

using namespace std;


int main(){
	
	char A[200] = {};
	
	cin.getline(A, 200);
	
	string B;
	
	B = A;
	
	for(int i=0;i<B.length();i++) {
		
		if ( B[i] >= 'A' && B[i] <= 'Z')
		B[i] += ' ';
		else if ( B[i] >= 'a' && B[i] <= 'z')
		B[i] -= ' ';
	}
	cout << B << "\n";
    return 0;
}

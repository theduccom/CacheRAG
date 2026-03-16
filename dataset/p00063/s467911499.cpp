#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	string A;
	int count = 0;
	int bj;

	while(cin >> A){
		string B="";

		for(int j=0;A[j] !='\0';j++){bj = j;}

		for(int i=bj;i >= 0;i--){
			B += A[i];
		}

		if(A == B)count++;

	}

	cout << count << endl;
}
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int main() {
	string sentence;
	getline(cin, sentence);
	for (int i = 0;i<sentence.size() ; i++) {
		if (sentence[i] >= 97 && sentence[i] <= 122)sentence[i] = sentence[i] - 32;
	}
	cout << sentence << endl;
}
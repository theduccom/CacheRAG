#include<iostream>
#include<string>
using namespace std;

bool check_sym(string sentence) {
	int sentence_half; bool sym=true;
	if (sentence.length() % 2 == 1) {
		sentence_half = sentence.length() / 2 ;
		for (int i = 1; i <= sentence_half; i++) {
			if (sentence[sentence_half - i] != sentence[sentence_half + i])sym = false;
		}
		return sym;
	}
	else if (sentence.length() % 2 == 0) {
		sentence_half = sentence.length() / 2-1;
		for (int i = 0; i <= sentence_half; i++) {
			if (sentence[sentence_half - i] != sentence[sentence_half + i + 1])sym = false;
		}
		return sym;
	}
}

int main() {
	int how = 0; string sentence; 
	while(cin >> sentence) {		
		if (check_sym(sentence)) { how++; }
	}
	cout << how<<endl;
	return 0;
}
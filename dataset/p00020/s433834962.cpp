#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
	char Sentence[201];
	fgets(Sentence, 201, stdin);
	for(int i = 0; i < 201; i++){
		if('a' <= Sentence[i] && Sentence[i] <= 'z'){
			Sentence[i] += 'A' - 'a';
		}
	}
	printf("%s", Sentence);
	return 0;
}
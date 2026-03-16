#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	char input[2000];
	cin.getline(input, 1000);
	for (int i = 0; input[i] != '\0'; i++){
		if (!strncmp(&input[i], "apple", 5)){
			strncpy(&input[i], "peach", 5);
		}
		else if (!strncmp(&input[i], "peach", 5)){
			strncpy(&input[i], "apple", 5);
		}
	}
	printf("%s\n", input);
	return 0;
}
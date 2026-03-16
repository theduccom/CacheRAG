#include<iostream>
#include<stdio.h>
#include<map>
#include<string>
using namespace std;

int main(){
	char s[2];
	map<string, int>m;
	while(scanf("%*d,%s", s) != EOF){
		m[s]++;
	}
	cout << m["A"] << "\n" << m["B"] << "\n" << m["AB"] << "\n" << m["O"] << endl;
}
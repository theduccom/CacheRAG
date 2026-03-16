#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#define range(s,n) for(int i = s; i < n; i++)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

int main(){
	char str[101];

	while(cin >> str){
		int j = 0;
		while(str[j]){
			if(str[j] == '@'){
				range(0, str[j + 1] - '0'){
					printf("%c",str[j + 2]);
				}
				j += 3;
			}else{
				printf("%c",str[j]);
				j++;
			}
		}
		cout << endl;
	}
}
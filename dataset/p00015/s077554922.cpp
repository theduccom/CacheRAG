#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <stack>
using namespace std;

int main(){
	int n,i,j,flag;
	char ch1[100],ch2[100];
	cin >> n;
	fgets(ch1,100,stdin);
	for(i = 0;i < n;i++){
		fgets(ch1,100,stdin);
		fgets(ch2,100,stdin);
		if(strlen(ch1) > 81 || strlen(ch2) > 81){
			cout << "overflow" << endl;
		}
		else {
			stack<int> st1,st2,sum;
			sum.push(0);
			for(j = 0;j < strlen(ch1);j++) if(ch1[j] != '\n') st1.push(ch1[j] - '0');
			for(j = 0;j < strlen(ch2);j++) if(ch2[j] != '\n') st2.push(ch2[j] - '0');
			while(!st1.empty() || !st2.empty()){
				if(st1.empty()) st1.push(0);
				if(st2.empty()) st2.push(0);
				flag = sum.top();
				sum.pop();
				sum.push((st1.top() + st2.top() + flag) % 10);
				sum.push((st1.top() + st2.top() + flag) / 10);
				st1.pop();
				st2.pop();
			}
			if(sum.top() == 0) sum.pop();
			if(sum.size() > 80) {
				cout << "overflow" << endl;
				continue;
			}
			while(!sum.empty()) {
				cout << sum.top();
				sum.pop();
			}
			cout << endl;
		}
	}
	return 0;
}
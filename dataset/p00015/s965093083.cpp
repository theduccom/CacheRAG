#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(void){
	int N;
	string A, B, tmp;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> A;
		cin	>> B;
		if(A.size()>80 || B.size()>80){
			cout << "overflow" << endl;
			continue;
		}
		if(A.size() < B.size()) tmp = B, B = A, A = tmp;
		int dif = A.size() - B.size();
		int carry = 0;
		for(int i=A.size(); i>=0; i--){
			if(i-dif>=0) A[i] = A[i]+B[i-dif]-'0'+carry;
			else A[i] += carry;
			if(A[i] >= '0'+10) carry = 1, A[i] -= 10;
			else carry = 0;
		}
		if(carry==1){
			if(A.size()==80){
				cout << "overflow" << endl;
				continue;
			}else cout << '1';
		}
		for(int i=0; i<A.size(); i++) cout << A[i];
		cout << endl;
	}
}
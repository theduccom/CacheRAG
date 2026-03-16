#include<iostream>
#include<string>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a==0){
		//a==0
		if (b==0){
			if (c==0){
				cout << "Close" << endl;
			}else {
				cout << "Open" << endl;
			}
		}else {
			cout << "Close" << endl;
		}
	}else{
		//a==1
		if (b==0){
			cout << "Close" << endl;
		}else{
			cout << "Open" << endl;
		}
	}
	cin >> c;
}
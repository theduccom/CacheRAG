#include<iostream>
#include<string>
using namespace std;

int main(void) {

	for (int i = 1; i <10; i++) {
		for (int j = 1; j <10; j++) {
			cout << to_string(i) + "x" + to_string(j) + "=" + to_string(i*j) << endl;
		}
	}

}

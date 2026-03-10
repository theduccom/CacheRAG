#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	for(int i=1;i<=9;i++){
		for(int s=1;s<=9;s++){
			cout << i << "x" << s << "=" << i * s << endl;
		}
	}
    return 0;
}
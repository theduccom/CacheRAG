#include <iostream>
#include <cstdio>
#include <algorithm>
#include <sstream>
#include <vector>
#include <map>
#include <cassert>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	a = a * 4 + b * 2 + c;
	if( a == 4 ) cout << "Close" << endl;
	if( a == 2 ) cout << "Close" << endl;
	if( a == 6 ) cout << "Open" << endl;
	if( a == 1 ) cout << "Open" << endl;
	if( a == 0 ) cout << "Close" << endl;
}
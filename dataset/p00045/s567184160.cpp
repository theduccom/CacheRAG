#include<iostream>
#include<string>
using namespace std;

int main(){
	string in;
	int sum=0, i=0;
	double ave = 0.0;
	while( getline(cin,in), in.length() ){
		int val, amo;
		sscanf(in.c_str(), "%d,%d", &val, &amo);
		sum += val*amo;
		ave += amo;
		i++;
	}
	ave /= i;
	int iAve = (int)(ave+0.5);
	cout << sum << endl;
	cout << iAve << endl;
	return 0;
}
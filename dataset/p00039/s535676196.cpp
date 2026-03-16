#include<iostream>
#include<string>
#include<map>
using namespace std;

#define MAX 100

int main()
{
	int sum, tmpsum;
	int i;
	string letters;
	map<char, int> values;
	values['I'] = 1;
	values['V'] = 5;
	values['X'] = 10;
	values['L'] = 50;
	values['C'] = 100;
	values['D'] = 500;
	values['M'] = 1000;
	while (cin>>letters) {
		sum = 0;
		tmpsum = values[letters[0]];
		for (i = 1; i < letters.size(); i++) {
			if (values[letters[i-1]] == values[letters[i]]) {
				tmpsum += values[letters[i-1]];
			} else if (values[letters[i-1]] > values[letters[i]]) {
				sum += tmpsum;
				tmpsum = values[letters[i]];
			} else {
				sum -= tmpsum;
				tmpsum = values[letters[i]];
			}
		}
		sum += tmpsum;
		cout<<sum<<endl;
	}
	return 0;
}
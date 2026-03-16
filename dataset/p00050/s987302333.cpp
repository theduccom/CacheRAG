#include<iostream>
#include<string>
using namespace std;

int main()
{
	string sentence;
	string::size_type a, b, i;
	int c, d;

	getline(cin, sentence);
	i = 0;
	while (1) {
		a = sentence.find("apple", i);
		b = sentence.find("peach", i);
		if( a==string::npos && b==string::npos ) break;
		if (a<b) {
			sentence.replace(a, 5, "peach");
			i = a+5;
		} else {
			sentence.replace(b, 5, "apple");
			i = b+5;
		}
	}
	cout<<sentence<<endl;
}
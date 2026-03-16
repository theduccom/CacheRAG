#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	int n;
	string a;
	string g = "Hoshino";

	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; ++i){
		string::size_type x;
		getline(cin, a);
		while(x = a.find("Hoshino"), x != string::npos)
			a.replace(x, 7, "Hoshina");
		cout << a << endl;
	}
	
	return 0;
}
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
	int n;
	scanf("%d%*c", &n);
	for (int i = 0; i < n; i++){
		string m;
		
		getline(cin, m);
		while (m.find("Hoshino") != -1){
			m.replace(m.find("Hoshino"), 7, "Hoshina");
		}
		cout << m << endl;
	}
	return (0);
}
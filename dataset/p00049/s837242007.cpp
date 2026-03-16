#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	int n;
	char h;
	string s;
	int abo[4] = { 0 };

	while (cin >> n >> h >> s){
		if (s == "A"){
			abo[0]++;
		}
		else if (s == "B"){
			abo[1]++;
		}
		else if (s == "AB"){
			abo[2]++;
		}
		else{
			abo[3]++;
		}
	}
	
for (int i = 0; i < 4; i++){
	cout << abo[i] << endl;
}
}
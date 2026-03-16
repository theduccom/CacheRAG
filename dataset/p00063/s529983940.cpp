#include<iostream>
#include<string>


using namespace std;



int main(){
	string s;
	int fit = 0;
	int i, j;

	while (cin >> s){
		for (i = 0, j = s.size() - 1;; i++, j--){
			if (i == j || i > j){
				fit++;
				break;
			}
			else if (s[i] != s[j]){
				break;
			}
		}
		
	}

	cout << fit << endl;

}
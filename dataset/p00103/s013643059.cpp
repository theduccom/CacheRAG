#include <iostream>
#include <string>
using namespace std;

int main()
{
	int point, base, n, out;
	string ibe;

	cin >> n;
	for (int k = 0; k < n; k++){
		base = point = out = 0;
		while (1){
	 	 cin >> ibe;
		 if (ibe == "HIT"){
			 base++;
			 if (base == 4){
				 base--;
				 point++;
			 }
		 }
		 else if (ibe == "OUT"){
			 out++;
		 }
		 else {
			 point += base + 1;
			 base = 0;
		 }
		 if (out >= 3) break;
		 
		}
		cout << point << endl;
	}
	return (0);
}	
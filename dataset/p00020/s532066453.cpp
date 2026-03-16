#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int i, mozisu;
	string komozi;
	getline(cin, komozi);
	mozisu = komozi.size();

	for(i = 0; i < mozisu; i++){
		if(komozi[i] < 91){
			continue;
		}

		else{
			komozi[i] = komozi[i] - 32;
		}
	}

	cout << komozi << endl;

	return 0;
}
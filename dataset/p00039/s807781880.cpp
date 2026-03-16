#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector <int> vi;
typedef vector <string> vs;

int main(void){
	vi x;
	string suit = "IVXLCDM";
	int num[] = {1,5,10,50,100,500,1000};
	while (true){
		string roman;
		cin>>roman;
		if (cin.eof()) break;
		int tmp, tmp2=9999;
		for (int i=0; i<(int)roman.size(); i++)
			for (int j=0; j<(int)suit.size(); j++)
				if (roman[i]==suit[j]){
					tmp = num[j];
					if (i!=0 && tmp2<tmp)
						x[i-1] = -tmp2;
					x.push_back(tmp);
					tmp2 = tmp;
					break;
				}
		int s=0;
		for (int i=0; i<(int)x.size(); i++)
			s += x[i];
		cout<<s<<endl;
		x.clear();
	}
}
// 2011/01/13 Tazoe

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct bindex{
	string wrd;
	int pag;
};

int main()
{
	struct bindex ind[100];
	int n=0;

	while(!cin.eof()){
		string str;
		getline(cin, str);

		if(!str.empty()){
			istringstream ist(str);
			ist >> ind[n].wrd >> ind[n].pag;
			n++;
		}
	}

	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if((ind[i].wrd>ind[j].wrd)||(ind[i].wrd==ind[j].wrd&&ind[i].pag>ind[j].pag)){
				string wrd_tmp = ind[i].wrd;
				int pag_tmp = ind[i].pag;
				ind[i].wrd = ind[j].wrd;
				ind[i].pag = ind[j].pag;
				ind[j].wrd = wrd_tmp;
				ind[j].pag = pag_tmp;
			}

	cout << ind[0].wrd << endl;
	cout << ind[0].pag;
	for(int i=1; i<n; i++)
		if(ind[i-1].wrd==ind[i].wrd){
			cout << ' ' << ind[i].pag;
		}
		else{
			cout << endl;
			cout << ind[i].wrd << endl;
			cout << ind[i].pag;
		}
	cout << endl;

	return 0;
}
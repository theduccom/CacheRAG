// 2011/01/05 Tazoe

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	while(true){
		int n;
		cin >> n;
		if(n==0)
			break;

		int tab[11][11];
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				cin >> tab[i][j];

		for(int i=0; i<n; i++){
			tab[i][n] = 0;
			for(int j=0; j<n; j++)
				tab[i][n] += tab[i][j];
		}

		for(int j=0; j<n+1; j++){
			tab[n][j] = 0;
			for(int i=0; i<n; i++)
				tab[n][j] += tab[i][j];
		}

		for(int i=0; i<n+1; i++){
			for(int j=0; j<n+1; j++)
				cout << setw(5) << tab[i][j];
			cout << endl;
		}
	}

	return 0;
}
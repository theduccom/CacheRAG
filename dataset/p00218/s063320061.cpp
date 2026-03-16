#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int pm, pe, pj;
	int n;

	while (scanf("%d", &n), n != 0){
		for (int i = 0; i < n; i++){
			scanf("%d%d%d", &pm, &pe, &pj);
			if (pm == 100 || pe == 100 || pj == 100){
				cout << "A" << endl;
			}
			else if ((pm + pe) / 2 >= 90){
				cout << "A" << endl;
			}
			else if ((pm + pe + pj) / 3 >= 80){
				cout << "A" << endl;
			}
			else if ((pm + pe + pj) / 3 >= 70){
				cout << "B" << endl;
			}
			else if ((pm + pe + pj) / 3 >= 50 && (pm >= 80 || pe >= 80)){
				cout << "B" << endl;
			}
			else {
				cout << "C" << endl;
			}
		}
	}

	return (0);
}
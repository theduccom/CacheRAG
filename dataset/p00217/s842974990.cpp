#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int n;
	int num, pt;
	int d1, d2;

	while (scanf("%d", &n), n != 0){
		int max_n, max_pt = 0;

	    for (int i = 0; i < n; i++){
		    scanf("%d%d%d", &num, &d1, &d2);
		    pt = d1 + d2;
		    if (max_pt < pt){
				max_n = num;
				max_pt = pt;
			}
	    } 
	   	cout << max_n << " " << max_pt << endl;
	}

	return (0);
}
#include <iostream>
using namespace std;

int main(void)
{
	int n;

	while(cin >> n,n){
		int max_no=-1,max_val=-1;
		int no,a,b;
		while(--n, n >= 0){
			cin >> no >> a >> b;

			if(max_val < a+b){
				max_no = no;
				max_val = a+b;
			}
		}

		cout << max_no << ' ' << max_val << endl;
	}


	return 0;
}
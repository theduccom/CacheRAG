// 2011/01/14 Tazoe

#include <iostream>
using namespace std;

void ABC_sort(int& A, int& B, int& C)
{
	int tmp[3] = {A, B, C};

	for(int i=0; i<2; i++)
		for(int j=i+1; j<3; j++)
			if(tmp[i]>tmp[j]){
				int swp = tmp[i];
				tmp[i] = tmp[j];
				tmp[j] = swp;
			}

	A = tmp[0];
	B = tmp[1];
	C = tmp[2];
}

int main()
{
	while(true){
		int A, B, C;
		cin >> A >> B >> C;
		if(A==0&&B==0&&C==0)
			break;

		ABC_sort(A, B, C);
		int D = A*A+B*B;

		int n;
		cin >> n;

		for(int i=0; i<n; i++){
			int R;
			cin >> R;
			if(D<4*R*R)
				cout << "OK" << endl;
			else
				cout << "NA" << endl;
		}
	}

	return 0;
}
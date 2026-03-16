// 2011/01/12 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int n;
		cin >> n;
		if(n==0)
			break;

		int emp[4000][3];
		for(int i=0; i<4000; i++){
			emp[i][0] = i+1;
			emp[i][1] = 0;
			emp[i][2] = 5000;
		}

		int ord = 1;
		for(int i=0; i<n; i++){
			int id, p, q;
			cin >> id >> p >> q;
			if(p!=0&&1000000/p+1<=q)
				emp[id-1][1] = 1000000;
			else if(emp[id-1][1]<1000000)
				emp[id-1][1] += p*q;
			if(emp[id-1][2]==5000){
				emp[id-1][2] = ord;
				ord++;
			}
		}

		for(int i=0; i<3999; i++)
			for(int j=i+1; j<4000; j++)
				if(emp[i][2]>emp[j][2]){
					int tmp1 = emp[i][0];
					int tmp2 = emp[i][1];
					int tmp3 = emp[i][2];
					emp[i][0] = emp[j][0];
					emp[i][1] = emp[j][1];
					emp[i][2] = emp[j][2];
					emp[j][0] = tmp1;
					emp[j][1] = tmp2;
					emp[j][2] = tmp3;
				}

		int cnt =0;
		for(int i=0; emp[i][2]!=5000&&i<4000; i++)
			if(emp[i][1]>=1000000){
				cout << emp[i][0] << endl;
				cnt++;
		}
		if(cnt==0)
			cout << "NA" << endl;
	}

	return 0;
}
#include <iostream>
#include <stdio.h>
using namespace std;

const int N=8,M=8;
char A[N][M];

int main()
{
	while(cin>>A[0]){
		for(int i=1;i<N;i++)
			cin >> A[i];
		int s,t;
		for(int i=N-1;i>=0;i--)
			for(int j=M-1;j>=0;j--)
				if(A[i][j]=='1'){
					s=i; t=j;
				}
				//A[s][t]=='1' && A[s][t]=='1' & A[s][t]=='1'
		if(A[s+1][t]=='1' && A[s][t+1]=='1' && A[s+1][t+1]=='1') cout << "A" <<endl;
		else if(A[s+1][t]=='1' && A[s+2][t]=='1' && A[s+3][t]=='1') cout <<"B" << endl;
		else if(A[s][t+1]=='1' && A[s][t+2]=='1' && A[s][t+3]=='1') cout <<"C"<<endl;
		else if(A[s+1][t]=='1' && A[s+1][t-1]=='1' && A[s+2][t-1]=='1') cout << "D" <<endl;
		else if(A[s][t+1]=='1' && A[s+1][t+1]=='1' && A[s+1][t+2]=='1') cout << "E" << endl;
		else if(A[s+1][t]=='1' && A[s+1][t+1]=='1' && A[s+2][t+1]=='1') cout << "F" << endl;
		else if(A[s][t+1]=='1' && A[s+1][t]=='1' && A[s+1][t-1]=='1') cout << "G" <<endl;
	}
	return 0;
}
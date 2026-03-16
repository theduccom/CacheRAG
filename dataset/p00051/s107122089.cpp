#include <cstdio>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	int A[8],B[8];
	int a,b;

	scanf("%d",&n);
	for(int u=0;u<n;u++){
		int atotal=0,btotal=0;

		scanf("%d",&a);
		for(int t=7;t>=0;t--){
			B[t] = A[t] = (int)(a / pow(10,t)) % 10;
		}
		

		//?°??????????
		for(int i=1;i<8;i++){
			int v=A[i];
			int j=i-1;
			while(j >= 0 && A[j] > v){
				A[j+1] = A[j];
				j--;
			}
			A[j+1] = v;
		}


		//??§?????????
		for(int i=1;i<8;i++){
			int v=B[i];
			int j=i-1;
			while(j >= 0 && B[j] < v){
				B[j+1] = B[j];
				j--;
			}
			B[j+1] = v;
		}


		for(int i=7;i>=0;i--){
			atotal += A[i] * pow(10,i);
		}

		for(int i=7;i>=0;i--){
			btotal += B[i] * pow(10,i);
		}

		cout << atotal - btotal << endl;

	}

}
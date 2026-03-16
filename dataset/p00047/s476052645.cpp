#include <iostream>

using namespace std;

void Swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){

	int data[3]={1,0,0};

	char tmp[2];
	char unko;

	int num[2];
	int i;


	while(cin>>tmp[0]){
		cin>>unko;
		cin>>tmp[1];

		for(int i=0;i<2;i++){
			num[i] = tmp[i] - 'A';
		}

		Swap(&data[num[0]],&data[num[1]]);
	}

	for(i=0;i<3;i++){
		if(data[i]==1){
			break;
		}
	}

	if(i==0){
		cout<<"A"<<endl;
	}
	else if(i==1){
		cout<<"B"<<endl;
	}
	else{
		cout<<"C"<<endl;
	}
	return 0;
}

/*
B,C
A,C
C,B
A,B
C,B
*/
	







#include <iostream>
using namespace std;

int main(){
	int i, j, tmp, a[3]={1, 0, 0};
	char s1, s2, kanma;
	
	
	while(1){
		cin>>s1>>kanma>>s2;
		if(cin.eof())break;

		if(s1=='A'||s2=='A'){
			i=0;
			if(s1=='B'||s2=='B')
				j=1;
			else 
				j=2;
		}
		else if(s1=='B'||s2=='B'){
			i=1;
			if(s1=='C'||s2=='C')
				j=2;
			else
				j=0;
		}
		else if(s1=='C'||s2=='C'){
			i=2;
			if(s1=='A'||s2=='A')
				j=0;
			else
				j=1;
		}

		tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
	}
if(a[0]==1)
		cout<<"A\n";
	else if(a[1]==1)
		cout<<"B\n";
	else if(a[2]==1)
		cout<<"C\n";

	return 0;

}

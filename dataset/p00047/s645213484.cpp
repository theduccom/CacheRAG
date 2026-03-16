#include<iostream>

#include<string>



using namespace std;



int main(){

	int a=1,b=2,c=3,s;

	char x,y,z;

	while(cin>>x>>y>>z){

		if((x=='A' && z=='B') || (x=='B' && z=='A')){

			s=a;

			a=b;

			b=z;

		}else if((x=='C' && z=='B') || (x=='B' && z=='C')){

			s=b;

			b=c;

			c=s;

		}else if((x=='A' && z=='C') || (x=='C' && z=='A')){

			s=c;

			c=a;

			a=s;

		}

	}

	if(a==1){
		cout << "A" << endl;

	}else if(a==2){
		cout << "B" << endl;

	}else{
		cout << "C" << endl;

	}
	return 0;

}

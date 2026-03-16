#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int cup[3]={0};
	cup[0]=1;
	char a,b,comma;
	while(cin>>a>>comma>>b){
		if(a=='A'&&b=='B'||a=='B'&&b=='A')
			swap(cup[0],cup[1]);
		else if(a=='B'&&b=='C'||a=='C'&&b=='B')
			swap(cup[1],cup[2]);
		else if(a=='A'&&b=='C'||a=='C'&&b=='A')
			swap(cup[0],cup[2]);
	}
	for(int i=0;i<3;i++){
		if(cup[i]==1){
			if(i==0)
				cout<<"A"<<endl;
			else if(i==1)
				cout<<"B"<<endl;
			else
				cout<<"C"<<endl;
		}
	
	
}
}
#include<iostream>
#include<algorithm>
using namespace std;

typedef struct{
	int no;
	int walk;
}Patiant;

int main(void){
	int n;
	while(cin>>n,n){
		Patiant input,max;
		max.walk=-1;
		int inp,f,s;
		for(int i  = 0 ; i < n ; i ++){
			cin>>inp;	input.no=inp;
			cin>>f>>s; input.walk=f+s;
			if(input.walk>max.walk)
				max=input;
			
		}
		cout<<max.no<<" "<<max.walk<<endl;
	}
}
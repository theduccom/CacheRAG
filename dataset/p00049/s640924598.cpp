#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	int n;
	int b[4]={0};
	char s[4],comma;
	
	while(cin>>n>>comma>>s){
		if(strcmp(s,"A")==0)
			b[0]++;
		else if(strcmp(s,"B")==0)
			b[1]++;
		else if(strcmp(s,"AB")==0)
			b[2]++;
		else if(strcmp(s,"O")==0)
			b[3]++;
		else
			break;
	}
	for(int i=0;i<4;i++)
		cout<<b[i]<<endl;
}
#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
	int number;
	char kanma;
	string blood;
	int blo[4]={0};
	while(cin>>number>>kanma>>blood){
		if(blood=="A") blo[0]++;
		else if(blood=="B")blo[1]++;
		else if(blood=="AB")blo[2]++;
		else blo[3]++;
	}
	for(int i=0;i<4;i++) cout<<blo[i]<<endl;
	return 0;
}
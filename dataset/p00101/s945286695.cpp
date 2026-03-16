#include <iostream> 
#include <string> 
#include <vector> 
#include <cmath> 
#include <algorithm> 
#include <cstdlib> 

using namespace std;

int main()
{
	char n[10],str[2000];

	fgets(n,sizeof(n),stdin);

	for(int i=0;i<atoi(n);i++){
		fgets(str,sizeof(str),stdin);
		for(int j=0;str[j]!=NULL;j++){
			if(str[j]=='o' && j>=6){
				if(str[j-6]=='H'&&str[j-5]=='o'&&str[j-4]=='s'&&str[j-3]=='h'&&str[j-2]=='i'&&str[j-1]=='n') str[j]='a';
			}
		}
		cout<<str;
	}
	return 0;
}
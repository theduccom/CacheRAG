#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int cup[]={1,0,0};
	for(char a,b;scanf("%c,%c ",&a,&b)==2;)
		swap(cup[a-'A'],cup[b-'A']);
	
	for(int i=0;i<3;i++)
		if(cup[i]){
			printf("%c\n",'A'+i);
			break;
		}
	
	return 0;
}
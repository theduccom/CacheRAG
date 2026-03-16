#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int cup[3] = {1,0,0};
	char s1, s2;
	
	while( scanf("%c,%c\n", &s1, &s2) != EOF ){
		swap( cup[s1-'A'] , cup[s2-'A'] );
	}
	printf("%c\n", cup[0]*'A' + cup[1]*'B' + cup[2]*'C');   
}
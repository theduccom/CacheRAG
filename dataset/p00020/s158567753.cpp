#include<cstdio>
using namespace std;

int main(){
	char str[1024], *s;
	scanf("%[^\n]", str);
	int i=0;
	while(str[i++]!='\0');
	s = new char[i];
	for( int j=0; j<i; j++ ){
		s[j] = str[j];
		if( ('a'<=s[j])&&(s[j]<='z') ){
			s[j] -= 32;
		}
	}
	printf("%s\n", s);
	delete[] s;
	s=0;
	return 0;
}
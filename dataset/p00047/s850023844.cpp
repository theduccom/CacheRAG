#include <cstdio>
using namespace std;

int main(){
	char m1, m2;
	char ball;
	
	ball = 'A';
	while((scanf("%c,%c", &m1, &m2)) != EOF){
		if(ball == m1) ball = m2;
		else if(ball == m2) ball = m1;
	}
	
	printf("%c\n", ball);
	
	return 0;
}
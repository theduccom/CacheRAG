#include<cstdio>

int main() {
	int n = 0x00;
	for( int i = 0; i < 3; ++i ) {
		int b;
		scanf("%d", &b);
		n |= b<<(2 - i);
	}
	printf( n==6 || n==1 ? "Open\n" : "Close\n" );
	
	return 0;
}
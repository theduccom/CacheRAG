#include <stdio.h>

#define N 80

// Longint <- String
int init(int a[], char s[]);
// a <- b + c
int add(int a[], int b[], int c[]);
// print Longint
void print(int a[]);

int main(void){
	int n;
	int a[N], b[N], sum[N];
	char s[101], t[101];
	
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%s", s);
		scanf("%s", t);
		if (init(a, s)==-1 || init(b, t)==-1){
			puts("overflow");
			continue;
		}
		if (add(sum, a, b)==-1){
			puts("overflow");
		} else {
			print(sum);
		}
	}
	return 0;
}

// Longint <- String
int init(int a[], char s[]){
	int len=0;
	
	for (int i=0; i<N; i++) a[i] = 0;
	for (char *p=s; *p!='\0'; p++) len++;
	if (len>N) return -1;
	for (int i=0; s[i]!='\0'; i++){
		a[N-len+i] = s[i] - '0';
	}
	return 0;
}
// a <- b + c
int add(int a[], int b[], int c[]){
	int cry=0;
	for (int i=N-1; i>=0; i--){
		a[i] = b[i]+c[i]+cry;
		cry = a[i]/10;
		a[i] %= 10;
	}
	return cry ? -1 : 0;
}

// print Longint
void print(int a[]){
	int i;
	for (i=0; i<N && a[i]==0; i++)
	;
	if (i==N){
		puts("0");
		return;
	} else {
		for (; i<N; i++){
			printf("%d", a[i]);
		}
		puts("");
	}
}
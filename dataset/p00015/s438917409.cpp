#include<cstdio>

int main(){
	int a[82] = {};
	int b[82] = {};
	int c[82] = {};
	int n;
	int k,l,m,f;
	char t;
	int of;

	scanf("%d\n", &n);

	for(int i = 0; i < n; i++){
		for(int i = 0; i < 82; i++){
			c[i] = 0;
		}
		of = k = l = 0;
		scanf("%c", &t);
		while(t - 10){
			k++;
			a[k] = t - '0';
			scanf("%c", &t);
			if(k == 81){
				of = 1;
				while(t - 10){
					scanf("%c", &t);
				}
			}
		}
		scanf("%c", &t); 

		while(t - 10){
			l++;
			b[l] = t - '0';
			scanf("%c", &t);
			if(l == 81){
				of = 1;
				while(t - 10){
					scanf("%c", &t);
				}
			}

		}

		m = 0;
		f = 0;

		while(k - m){
			c[m] = a[k - m];
			m++;
		}
		m = 0;
		while(l - m){
			c[m] += b[l - m ] + f;
			f = 0;
			if(c[m] > 9){
				c[m] -= 10;
				f = 1;
			}
			m++;
		}

		while(f){
			c[m] += 1;
			f = 0;
			if(c[m] > 9){
				c[m] -= 10;
				f = 1;
			}
			m++;
		}

		if(k > m){
			m = k;
		}

		for(int i = 0; i < m; i++){
			if(m == 81 || of){
				printf("overflow");
				f = 1;
				i = m;
			}else{
				if((c[m - i -1]) || f){
					printf("%d", c[m - i - 1]);
					f = 1;
				}
			}
		}
		if(f - 1){
			printf("0");
		}
		printf("\n");
	}
	return 0;
}
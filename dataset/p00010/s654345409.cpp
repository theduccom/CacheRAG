#include <stdio.h>
#include <math.h>

struct h{
	double l;
	double m;
	double n;
	double k;
};

void getl(h *len, const double x, const double y){
	len->l = x;
	len->m = y;
	len->n = 1.0;
	len->k = -(x*x + y*y);
}

void calc(h *len, double *xp, double *yp, double *r){
	struct h th;

	for(int i=0;i<3; ++i){
		if(len[i].l != 0.0){
			if(i != 0){
				th = len[i];
				len[i] = len[0];
				len[0] = th;
			}
			len[0].m /= len[0].l;
			len[0].n /= len[0].l;
			len[0].k /= len[0].l;
			len[0].l = 1.0;
			break;
		}
	}
	for(int i=1;i<3;++i){
		if(len[i].l != 0.0){
			len[i].m -= len[0].m*len[i].l;
			len[i].n -= len[0].n*len[i].l;
			len[i].k -= len[0].k*len[i].l;
			len[i].l = 0.0;
		}
	}

	for(int i=1; i<3; ++i){
		if(len[i].m != 0.0){
			if(i != 1){
				th = len[i];
				len[i] = len[1];
				len[1] = th;
			}
			len[1].n /= len[1].m;
			len[1].k /= len[1].m;
			len[1].m = 1.0;
			break;
		}
	}
	if(len[0].m != 0.0){
		len[0].n -= len[1].n*len[0].m;
		len[0].k -= len[1].k*len[0].m;
		len[0].m = 0.0;
	}
	if(len[2].m != 0.0){
		len[2].n -= len[1].n*len[2].m;
		len[2].k -= len[1].k*len[2].m;
		len[2].m = 0.0;
	}

	if(len[2].n != 1.0){
		len[2].k /= len[2].n;
		len[2].n = 1.0;
	}
	if(len[0].n != 0.0){
		len[0].k -= len[2].k*len[0].n;
		len[0].n = 0.0;
	}
	if(len[1].n != 0.0){
		len[1].k -= len[2].k*len[1].n;
		len[1].n = 0.0;
	}
	*xp = -len[0].k / 2;
	*yp = -len[1].k / 2;
	*r  = (*xp)*(*xp) + (*yp)*(*yp) - len[2].k;
	*r = sqrt(*r);

	*xp = floor((*xp * 1000 + 0.5))/1000;
	*yp = floor((*yp * 1000 + 0.5))/1000;
	*r = floor((*r * 1000 + 0.5))/1000;
}

int main(void){
	int n=0;
	double x[6];
	double xp,yp,r;
	struct h len[3];

	scanf("%d", &n);
	for(int i=0;i<n;++i){
		scanf("%lf %lf %lf %lf %lf %lf", x, x+1, x+2, x+3, x+4, x+5);
		getl(len  , x[0], x[1]);
		getl(len+1, x[2], x[3]);
		getl(len+2, x[4], x[5]);
		calc(len, &xp, &yp, &r);
		printf("%.3f %.3f %.3f\n", xp, yp, r);
	}
	return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
	double ax,ay,bx,by,cx,cy,ix,iy,r;
	double abx,aby,acx,acy;
	double fb,fc;
	double ffb,ffc,aaby,aacy;
	int n,a;
	scanf("%d",&n);
	for(a=0;a<n;a++){
		scanf("%lf %lf",&ax,&ay);
		scanf("%lf %lf",&bx,&by);
		scanf("%lf %lf",&cx,&cy);
		abx=bx-ax;
		aby=by-ay;
		acx=cx-ax;
		acy=cy-ay;
		fb=abx*abx+aby*aby;
		fc=acx*acx+acy*acy;
		ffb=fb*acx;
		ffc=fc*abx;
		aaby=aby*acx;
		aacy=acy*abx;
		iy=(ffc-ffb)/((aacy-aaby)*2);
		if(abx!=0){ix=(fb-(2*iy*aby))/(abx*2);}
		if(acx!=0){ix=(fc-(2*iy*acy))/(acx*2);}
		r=sqrt(ix*ix+iy*iy);
		ix=ix+ax;
		iy=iy+ay;
		printf("%.3lf %.3lf %.3lf\n",ix,iy,r);
	}
	return 0;
}
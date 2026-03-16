//円と円の関係
//参考(http://dac.gijodai.ac.jp/it-con/h16_sakuhin/ippan/ippan3/math/3grade/circle/circle4.htm)
#include<cstdio>
#include<cmath>

using namespace std;

int main(void){
	int n,i,ans;
	double xa,ya,ra,xb,yb,rb;
	double menA,menB,data,data2,kyori;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf %lf",&xa,&ya,&ra,&xb,&yb,&rb);
		//二つの中心点の距離を求める
		data=(xb-xa)*(xb-xa)+(yb-ya)*(yb-ya);
		kyori=sqrt(data);
		//交点の関係
		data=ra+rb;
		data2=fabs(ra-rb);
		if(kyori>data)
			ans=0;
		else if(kyori<data2){
			menA=ra*ra*3.14;	//pi＝円周率
			menB=rb*rb*3.14;
			if(menA>menB)
				ans=2;
			else if(menA<menB)
				ans=-2;
		}
		else
			ans=1;
		printf("%d\n",ans);
	}

	return 0;
}
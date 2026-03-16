#include <cstdio>
using namespace std;
int main(int argc, char *argv[]) {
	int l[10], v1, v2;
	while (EOF != scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
	&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v1,&v2)) {
		// sum
		int sum = 0;
		for (int i=0;i<10;i++) sum+=l[i];
		// 1's length
		float ans = (float)(sum)*(float)(v1)/(float)(v1+v2);
		//printf("%f\n",ans);
		// calc
		int tmp = 0;
		for (int i = 0; i < 10; i++) {
			tmp += l[i];
			if (ans <= tmp) {
				printf("%d\n",i+1);
				break;
			}
		}
	}
	return 0;
}
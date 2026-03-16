#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int dsn; scanf("%d", &dsn);
	for(int dsi = 0; dsi < dsn; dsi++) {
		static char ais[10000],bis[10000];
		scanf("%s%s",ais,bis);
		int aislen = strlen(ais);
		int bislen = strlen(bis);
		if(aislen > 80 || bislen > 80) {
			printf("overflow\n");
			continue;
		}
		static int ad[90],bd[90];
		fill(ad,ad+90,0);
		fill(bd,bd+90,0);
		for(int i = 0; i < aislen; i++) ad[i] = ais[aislen-1-i]-'0';
		for(int i = 0; i < bislen; i++) bd[i] = bis[bislen-1-i]-'0';
		int cl = 0;
		for(int i = 0; i < 90; i++) {
			ad[i] += bd[i]+cl;
			cl = ad[i]/10;
			ad[i] %= 10;
		}
		if(ad[80]) {
			printf("overflow\n");
			continue;
		}
		bool flag = false;
		for(int i = 89; i >= 0; i--) {
			flag = flag || ad[i];
			if(flag) {
				printf("%d",ad[i]);
			}
		}
		if(!flag)printf("0");
		printf("\n");
	}
	return 0;
}
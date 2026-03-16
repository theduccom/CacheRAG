#include <cstdio>
using namespace std;

int main(){
	int n, m, c = 0, s = 0, t = 0;
	while(scanf("%d,%d", &n, &m) == 2){
		t += m;
		s += n * m;
		++c;
	}
	printf("%d\n%.f\n", s, (double)t / c + 1e-9);
}
#include <cstdio>

void solve(){
	for(int i = 1; i < 10; i ++){
		for(int j = 1; j < 10; j ++)
			printf("%dx%d=%d\n", i, j, i * j);
	}
}

int main(int argc, char const *argv[]){
	solve();
	return 0;
}
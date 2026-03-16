#include <cstdio>

bool judge(int year)
{
	if (year % 4 == 0) {
		if (year % 100 != 0) {
			return true;
		} else if(year % 400 == 0){
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}

int main(void){
	int a, b, n_data;
	bool flag;//うるう年があるかどうか
	n_data=0;//いくつ目のデータセットか

	while (1) {
		scanf("%d%d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}

		if (n_data != 0) {//もし最初のデータセットでなければ
			printf("\n");
		}

		flag = false;
		for (int i=a; i <= b; i++) {
			if (judge(i)) {
				printf("%d\n", i);
				flag = true;
			}
		}
		if (!flag) {//もしうるう年がなければ
			printf("NA\n");
		}

		n_data++;
	}

	return 0;
}
#pragma GCC optimize("O2")
#pragma GCC optimize("O3")

#include<bits/stdc++.h>

signed main() {
	for (int i = 1; i <= 9; ++i)
		for (int j = 1; j <= 9; ++j)
			printf("%dx%d=%d\n", i, j, i * j);
}
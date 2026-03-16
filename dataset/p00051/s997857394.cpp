#include <cstdio>
#include <cstdlib>

const int MAX = 8;

int solve(int num[])
{
        char max[MAX + 1], min[MAX + 1];

        for (int i = 0; i < MAX - 1; i++) {
                for (int j = MAX - 1; j > i; j--) {
                        if (num[j - 1] > num[j]) {
                                int tmp = num[j - 1];
                                num[j - 1] = num[j];
                                num[j] = tmp;
                        }
                }
        }
        for (int i = 0; i < MAX; i++) {
                min[i] = num[i] + '0';
                max[i] = num[MAX - 1 - i] + '0';
        }

        return atoi(max) - atoi(min);
}

int main()
{
        int n;
        char str[MAX + 1];
        int num[MAX];

        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
                scanf("%s", str);
                for (int j = 0; j < MAX; j++) {
                        num[j] = str[j] - '0';
                }
                int ans = solve(num);
                printf("%d\n", ans);
        }

        return 0;
}
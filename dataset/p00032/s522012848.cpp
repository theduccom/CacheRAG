#include <cstdio>

using namespace std;

int main()
{
        int a, b, c;
        int rct = 0, rhm = 0;

        while (scanf("%d%*c%d%*c%d", &a, &b, &c) != EOF) {
                if (a * a + b * b == c * c) {
                        rct++;
                }
                else if (a == b) {
                        rhm++;
                }
        }

        printf("%d\n%d\n", rct, rhm);

        return 0;
}
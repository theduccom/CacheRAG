#include <cstdio>

using namespace std;

int main()
{
        bool cup[3];
        char c, c2;

        cup[0] = true;
        cup[1] = cup[2] = false;
        while (scanf("%c%*[,]%c%*[\n]", &c, &c2) != EOF) {
                int i = c - 'A';
                int i2 = c2 - 'A';
                bool tmp = cup[i];
                cup[i] = cup[i2];
                cup[i2] = tmp;
        }

        int i;
        for (i = 0; i < 3; i++) {
                if (cup[i]) {
                        printf("%c\n", 'A' + i);
                        break;
                }
        }

        return 0;
}
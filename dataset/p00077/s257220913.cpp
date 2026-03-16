#include <cstdio>
#include <cstring>

using namespace std;

void unzip(char c, int n, char str[], int *pos)
{
        for (int i = 0; i < n; i++) {
                str[(*pos)++] = c;
        }
}

int main()
{
        const int STRMAX = 51, STRMAX2 = 101;
        char str[STRMAX], str2[STRMAX2];

        while (scanf("%s", str) != EOF) {
                int pos = 0;
                for (int i = 0; i < strlen(str); i++) {
                        if (str[i] == '@') {
                                int n = str[++i] - '0';
                                char c = str[++i];
                                unzip(c, n, str2, &pos);
                        } else {
                                str2[pos++] = str[i];
                        }
                }
                str2[pos] = '\0';
                printf("%s\n", str2);
        }

        return 0;
}
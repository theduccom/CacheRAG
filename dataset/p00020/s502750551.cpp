#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
        char str[201];

        fgets(str, 200, stdin);
        int len = strlen(str);
        str[len - 1] = '\0';
        for (int i = 0; i < len; i++) {
                str[i] = toupper(str[i]);
        }
        printf("%s\n", str);

        return 0;
}
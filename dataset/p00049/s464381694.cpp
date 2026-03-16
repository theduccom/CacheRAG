#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
        int i;
        char c[3];
        string blood[4] = {"A", "B", "AB", "O"};
        int cnt[4] = {0};

        while (scanf("%d%*[,]%s%*[\n]", &i, c) != EOF) {
                int n;
                for (n = 0; strcmp(c, blood[n].c_str()); n++)
                        ;
                cnt[n]++;
        }

        for (int n = 0; n < 4; n++) {
                cout << cnt[n] << endl;
        }

        return 0;
}
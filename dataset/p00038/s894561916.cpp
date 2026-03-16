#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    char buf[32];
    while (fgets(buf, 32, stdin)) {
        int f[5];
        int k=0;
        char* p=strtok(buf, ",\n");
        f[0] = atoi(p);
        while (p = strtok(NULL, ",\n")) f[++k] = atoi(p);
        sort(f, f+5);

        string res = "null";
        for (int i=0; i<2; ++i) {
            if (f[0]==f[1]||f[1]==f[2]||f[2]==f[3]||f[3]==f[4])
                res = "one pair";
            if (f[0]==f[1]&&(f[2]==f[3]||f[3]==f[4]) || f[1]==f[2]&&f[3]==f[4])
                res = "two pair";
            if (f[0]==f[2]||f[1]==f[3]||f[2]==f[4]) res = "three card";
            if (f[0]+1==f[1]&&f[1]+1==f[2]&&f[2]+1==f[3]&&f[3]+1==f[4])
                res = "straight";
            if (f[0]==f[2]&&f[3]==f[4] || f[0]==f[1]&&f[2]==f[4])
                res = "full house";
            if (f[0]==f[3]||f[1]==f[4]) res = "four card";
            for (int j=0; j<5; j++) if (f[j]==1) f[j]=14;
            sort(f, f+5);
        }
        puts(res.c_str());
    }
    return 0;
}
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>

#define ll (long long)
#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)

using namespace std;

/*thief??????*/

int main(void){
    
    char str[210] = {};
    char copy[210] = {};
    int i = 0;
    gets(str);
    while(*(str+i))
    {
        *(copy+i) = toupper(*(str+i));
        i++;
    }
    printf("%s\n",copy);
    return 0;
    
}
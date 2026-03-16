#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    int cup[3] = {1};
    char x, y;
    while (scanf(" %c", &x) != EOF)
    {
        scanf(",%c", &y);
        swap(cup[x - 'A'], cup[y - 'A']);
    }
    for (int i = 0; i < 3; i++)
    {
        if (cup[i] > 0)
        {
            printf("%c\n", 'A' + i);
            break;
        }
    }
    return 0;
}
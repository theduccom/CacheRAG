#include <cstdio>

int main()
{
int b1, b2, b3;
scanf("%d %d %d", &b1, &b2, &b3);

return(!printf("%s\n", b1 + 2 * b2 + 4 * b3 >= 3 ? "Open" : "Close"));

}
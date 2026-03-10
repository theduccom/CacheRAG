#include<iostream>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    ios::sync_with_stdio(false);
    int i,j;
    for(i=1; i<=9; i++)
        for(j=1; j<=9; j++)
            cout << i << "x" << j << "=" << i*j << endl;
    return 0;
}
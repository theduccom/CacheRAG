#include<iostream>
using namespace std;
#define posA 0
#define posB 1
#define posC 2

int label(char c)
{
    if(c=='A')return posA;
    if(c=='B')return posB;
    else return posC;
}


int main()
{
    int cup[3] = {1,0,0};
    int temp;
    char c1,c2,t;
    while(cin >> c1 >> t >>c2)
    {
        temp = cup[label(c1)];
        cup[label(c1)] = cup[label(c2)];
        cup[label(c2)] = temp;
    }
    if(cup[posA]) cout << 'A' << endl;
    else if(cup[posB]) cout << 'B' << endl;
    else cout << 'C' << endl;


    return 0;
}
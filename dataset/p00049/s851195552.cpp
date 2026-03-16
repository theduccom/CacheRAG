#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a=0,b=0,o=0,ab=0;
    int n;
    char t;
    string s;
    while(cin >> n >> t >> s)
    {
        if(s=="A"){a++;continue;}
        if(s=="B"){b++;continue;}
        if(s=="O"){o++;continue;}
        if(s=="AB"){ab++;continue;}
    }
    cout <<a <<endl;
    cout <<b <<endl;
    cout <<ab <<endl;
    cout <<o <<endl;

    return 0;
}
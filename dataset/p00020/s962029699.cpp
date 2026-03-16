//#include<bits/stdc++.h>
//using namespace std;
#include<stdio.h>
#include<string.h>
char s[100000] = {0};
int cou = 0;

int main()
{
    int length;


        //cin >> s;
        for(int i = 0; i < 100000; i++)
        {
            scanf("%c",&s[i]);
            if(s[i] == '\n')break;
            if('a' <= s[i] && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
            cou++;
        }
        /*length = strlen(s);
        for(int i = 0; i < length; i++)
        {

        }
        //cout << s << endl;*/
        for(int i = 0; i < cou; i++)
        {
            printf("%c",s[i]);
        }
        printf("\n");


    return 0;
}
#include <bits/stdc++.h>
#define MAXN 1007

using namespace std;

int main(void)
{
    vector<int> applePos,peachPos;
    char msg[MAXN];
    int i=0;
    while((msg[i]=getchar())!='\n')
    {
        i++;
    }
    msg[i]=0;
    for(i=0;msg[i];i++)
    {
        if(strncmp(msg+i,"apple",5)==0)
        {
            applePos.push_back(i);
        }
        if(strncmp(msg+i,"peach",5)==0)
        {
            peachPos.push_back(i);
        }
    }
    for(i=0;i<applePos.size();i++)
    {
        strncpy(msg+applePos[i],"peach",5);
    }
    for(i=0;i<peachPos.size();i++)
    {
        strncpy(msg+peachPos[i],"apple",5);
    }
    printf("%s\n",msg);
    return 0;
}


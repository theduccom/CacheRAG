#include<iostream>
using namespace std;
#define BEFORE 4280
int main()
{
    int w;
    while(cin>>w)
    {
        if(w==-1)break;
        int kon = 0;
        if(w>=30)
        {
            kon = 1150+1250+1400+(w-30)*160;
        }
        else if(w >=20)
        {
            kon = 1150+1250+140*(w-20);
        }
        else if(w >=10)
        {
            kon = 1150+125*(w-10);
        }
        else
        {
            kon = 1150;
        }
        cout << BEFORE - kon << endl;
    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<int>V;

bool check_leap(int yr)
{
    if ((yr % 4 == 0) && !(yr % 100 == 0)|| (yr % 400 == 0))return true;
    else return false;
}


int main()
{
    #ifdef shibli
       //freopen("input.txt","r",stdin);
    #endif // shibli

    int A,B;
    bool line = false;
    while( scanf("%d %d",&A,&B) == 2 )
    {
        if( A == 0 && B == 0 )break;

        if( line )cout<<endl;

        line = true;

        for(int i = A; i<= B; i++ )
        {
            if( check_leap(i) )V.push_back(i);
        }

        if( V.size() == 0 )
        {
            cout<<"NA"<<endl;
        }
        else
        {
            for(int j = 0; j < V.size(); j++ )
            {
                cout<<V[j]<<endl;
            }
        }

        V.clear();
    }
}
/* Most men die at 25 , We just don't bury them until they are 70 - Benjamin Franklin */
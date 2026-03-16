#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

const int M = 0, E = 1, J = 2;

int main()
{
    int n, p[3], sum, ave;
    while(cin >> n && n)
    {
        rep(j,n)
        {
            sum= 0;
            cin >> p[M] >> p[E] >> p[J];
            REP(3) sum+= p[i];
            ave = sum / 3;

            if(p[0] == 100|| p[1] == 100 || p[2] == 100 ||((p[M]+ p[E]) >= 180)|| (ave >= 80)){cout << "A"<< endl; continue;}
            //if((p[M]+ p[E]) >= 180) {cout << "A" << endl; continue;}
            //if(ave >= 80) { cout << "A" << endl; continue;}

            if(ave >= 70 || (ave >=50 && (p[M] >=80 || p[E] >= 80))){cout <<"B" << endl; continue;}

            cout << "C" << endl;
        }    
    }

    return 0;
}
#include <iostream>
using namespace std;

const double EPS = 1e-8;

int main()
{
    int n, pm, pe, pj;
    while(cin >> n && n) {
        for(int i = 0; i < n; i++) {
            cin >> pm >> pe >> pj;
            char cls = 'X';
            double ave_me, ave_all;
            ave_me = (double)(pm + pe) / 2;
            ave_all = (double)(pm + pe + pj) / 3;
            if(pm == 100 || pe == 100 || pj == 100)
                cls = 'A';
            else if(ave_me + EPS > 90)
                cls = 'A';
            else if(ave_all + EPS > 80) 
                cls = 'A';
            else if(ave_all + EPS > 70)
                cls = 'B';
            else if(ave_all + EPS > 50 && (pm>= 80 || pe >= 80))
                cls = 'B';
            else
                cls = 'C';
            
            cout << cls << endl;
        }
    }
}
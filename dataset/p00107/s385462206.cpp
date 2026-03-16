#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    double x[3];
    int n;
    double a=0,r;
    for(;;){
        for(int i = 0;i < 3; i++)cin >> x[i];
        if(x[0] == 0&&x[1] == 0&&x[2] == 0)break;
        sort(x,x+3);

        a = sqrt((x[0]*x[0])+(x[1]*x[1]));

        cin >> n;

        for(int i = 0;i < n; i++){
            cin >> r;
            if(a < 2*r)cout << "OK" << endl;
            else cout << "NA" << endl;
        }
    }
    return 0;
}
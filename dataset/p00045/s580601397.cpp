#include<iostream>
using namespace std;

int main()
{
    int  va, num;
    char p;

    int sum = 0, cnt = 0;
    double ave = 0;
    while( cin >> va >> p >> num )
    {
        sum += va * num;
        ave += num;
        cnt++;
    }

    cout << sum << endl;

    if( ave / cnt - (int)ave / cnt >= 0.5)
        ave = (int)ave / cnt + 1;
    else
        ave = (int)ave / cnt;
    
    cout << ave << endl;
    
    return 0;
}

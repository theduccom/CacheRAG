#include <iostream>
#include <algorithm>
using namespace std;
bool isStraight(int* a)
{
    if(a[0]==1&&a[1]==10&&a[2]==11&&a[3]==12&&a[4]==13) return true;
    for(int i=1;i<5;i++) if(a[i]!=a[i-1]+1) return false;
    return true;
}
int main()
{
    int a[5]; char ch;
    while(cin >> a[0] >> ch >> a[1] >> ch >> a[2] >> ch >> a[3] >> ch >> a[4])
    {
        int sum=1; int pair=0;
        sort(a,a+5);
        for(int i=1;i<5;i++)
        {
            int tmp=1;
            while(i<5 && a[i-1]==a[i]) {tmp++; i++;}
            sum=max(tmp,sum);
        }
        bool flag=true;
        for(int i=1;i<5;i++)
        {
            if(flag && a[i-1]==a[i]) {pair++; flag=false;}
            else flag=true;
        }
        if(sum==4) cout << "four card" << endl;
        else if(sum==3 && pair==2) cout << "full house" << endl;
        else if(isStraight(a)) cout << "straight" << endl;
        else if(sum==3) cout << "three card" << endl;
        else if(pair==2) cout<< "two pair" << endl;
        else if(pair==1) cout << "one pair" << endl;
        else cout << "null" << endl;
    }
}
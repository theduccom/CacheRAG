#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <map>
using namespace std;
int main() {
    /*
    string num;
    int inputValue;
    vector<int> list;
  
    while(getline(cin, num))
    {
        int a,b;
        sscanf(num.c_str(), "%d %d",&a,&b);
        int sum = a+b;
        int digit = 0;
        while( sum != 0)
        {
            sum = sum/10;
            digit++;
        }
        cout << digit << endl;
   //     cout << a-b <<endl;
    }
  
    */
   for(int x=1  ; x < 10 ; x ++)
{
    for(int y =1 ; y < 10; y ++)
    {
        cout << x << "x" << y << "=" << x*y << endl;
    }
}
    return 0;
}


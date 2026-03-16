#include<iostream>
using namespace std;

int main()
{
    int a,b;
    int t = 0;

    while(cin >> a >> b , a || b)
    {
        bool NAflag = true;

        if(t != 0)cout << '\n';
        for(int i=a; i<=b; i++){
            if(i%4 == 0 && (i%100 != 0 || i%400 == 0)){
                cout << i << endl;
                NAflag = false;
            }
        }
        if(NAflag){
            cout << "NA" << endl;
        }
        
        t++;
    }

    return 0;
}
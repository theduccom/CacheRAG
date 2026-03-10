#include<iostream>
using namespace std;

int main(){

    int result=0;
    for(int i=1; i<10; i++)
    {
        for(int j=1; j<10; j++)
        {
            result+=i;
            cout<<i<<"x"<<j<<"="<<result<<endl;
        }
        result=0;
    }

    return 0;
}


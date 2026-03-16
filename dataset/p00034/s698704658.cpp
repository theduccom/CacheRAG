#include <iostream>

using namespace std;

int Solution(int l[10],int v[2])
{
    double sum=0;
    
    double t;
    
    double len;
    
    for(int i = 0; i < 10; i++)
    {
        sum += l[i];
    }
    
    t = sum / (v[0] + v[1]);
    
    len = v[0] * t;
    
    sum = 0;
    
    for(int i = 0; i < 10; i++)
    {
        sum += l[i];
        
        if(len <= sum)
        {
            return i+1;
        }
    }
}

int main()
{
    int l[10];
    int v[2]; // v1, v2
    
    char comma;
    
    while(cin >> l[0])
    {
        for(int i = 1; i < 10; i++)  //data input
        {
            cin>>comma>>l[i];
        }
        
        for(int i = 0; i < 2; i++)
        {
            cin>>comma>>v[i];
        }
        
        cout<<Solution(l, v)<<endl;
    }
    
    return 0;
}
#include<iostream>
 using namespace std;

int main()
{
    double height, max=0, min=0;
 
    bool i=1;
 
    while (cin >> height)
    {
        if(i)
        {
            max=height;
 
            min=height;
 
            i=0;
        }
 
        if(height>max)
        {
            max = height;
        }
 
        if(height<min)
        {
            min = height;
        }
    }
 
    cout << max-min << endl;
}
#include <iostream>
#include <cstring>

using namespace std;

int A[1000],B[1000],C[1000];

int main()
{
    int n;
    cin >> n;
    while(n > 0)
    {
        n--;
        string str1,str2;
        cin >> str1 >> str2;
        int len1 = str1.length();
        int len2 = str2.length();
        if(len1 < len2)
        {
            string st = str1;
            str1 = str2;
            str2 = st;
            int ll = len1;
            len1 = len2;
            len2 = ll;
        }
        for(int i = 0; i < 1000; i++)
        {
            C[i] = 0;
            A[i] = 0;
            B[i] = 0;
        }

        for(int i = 0; i < len1; i++)
            A[i] = str1[len1 - 1 - i] - '0';
        for(int i = 0; i < len2; i++)
            B[i] = str2[len2 - 1 - i] - '0';
        for(int i = 0 ; i < len1; i++)
        {
            C[i] = A[i] + B[i] + C[i];
            C[i+1] = C[i] / 10;
            C[i] = C[i] % 10;
        }
        //for(int i = len2; i <len1; i++)
       // {
           //  C[i] = C[i] + A[i];
           //  C[i+1] = C[i] / 10;
          //   C[i] = C[i] % 10;
       // }


        if(C[80] > 0)
            cout << "overflow" << endl;
        else
            {
                if(C[len1] > 0)
                    len1++;
                for(int i = len1-1; i >= 0; i--)
                    cout << C[i];
                cout << endl;
            }
    }
    return 0;
}
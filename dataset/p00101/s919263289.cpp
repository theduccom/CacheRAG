#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int index;
    string s;

    cin >> n;
    cin.ignore();

    for(int i=0; i < n; i++)
    {
        getline(cin, s);

        while(true)
        {
            index = s.find("Hoshino");

            if(index == string::npos)
                break;
            else
                s.replace(index, 7, "Hoshina");
        }
        cout << s << endl;
    }

    return 0;
}
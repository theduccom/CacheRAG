#include<iostream>
#include<string>
using namespace std;

void solve(int MAP[12][12],int i,int j);

int main()
{
    int MAP[12][12];
    string str;

    while(true)
    {
        int cnt = 0;

        for(int i=0; i<12; i++){
            cin >> str;
            if(cin.eof())break;
            for(int j=0; j<12; j++){
                MAP[i][j] = str[j]-'0';
            }
        }
        if(cin.eof())return 0;

        for(int i=0; i<12; i++){
            for(int j=0; j<12; j++){
                if(MAP[i][j] == 1){
                    solve(MAP,i,j);
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}

void solve(int MAP[12][12],int i,int j)
{
    MAP[i][j] = 2;

    if(i-1 >= 0){
        if(MAP[i-1][j] == 1){
            solve(MAP,i-1,j);
        }
    }
    if(i+1 <= 11){
        if(MAP[i+1][j] == 1){
            solve(MAP,i+1,j);
        }
    }
    if(j-1 >= 0){
        if(MAP[i][j-1] == 1){
            solve(MAP,i,j-1);
        }
    }
    if(j+1 <= 11){
        if(MAP[i][j+1] == 1){
            solve(MAP,i,j+1);
        }
    }

}
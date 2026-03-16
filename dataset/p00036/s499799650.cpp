#include<iostream>
#include<cstring>

using namespace std;
#define W 8
#define H 8
#define W_C 12
#define H_C 12

char tile[W_C][H_C];

char check(int w,int h)
{

    if(tile[w][h+1]=='1'&&tile[w-1][h+1]=='1'&&tile[w-1][h+2]=='1') return 'D';
    if(tile[w+1][h]=='1'&&tile[w][h+1]=='1'&&tile[w+1][h+1]=='1') return 'A';
    if(tile[w][h+1]=='1'&&tile[w][h+2]=='1'&&tile[w][h+3]=='1') return 'B';
    if(tile[w+1][h]=='1'&&tile[w+2][h]=='1'&&tile[w+3][h]=='1') return 'C';
    if(tile[w+1][h]=='1'&&tile[w+1][h+1]=='1'&&tile[w+2][h+1]=='1') return 'E';
    if(tile[w][h+1]=='1'&&tile[w+1][h+1]=='1'&&tile[w+1][h+2]=='1') return 'F';
    if(tile[w+1][h]=='1'&&tile[w-1][h+1]=='1'&&tile[w][h+1]=='1') return 'G';

    return 'Y';
}


int main()
{
    while(1)
    {
        memset(tile,'0',sizeof(tile));
        char ans = 'Z';

        for(int j=1;j<=H;j++)
        {
            for(int i=1;i<=W;i++)
            {
                cin >> tile[i][j];

            }
        }
        for(int j=1;j<=H;j++)
        {
            for(int i=1;i<=W;i++)
            {
                if(tile[i][j]=='1')
                {
                    ans = check(i,j);
                    break;
                }
            }
            if(ans != 'Z') break;
        }



        if(cin.eof()) break;
        cout << ans << endl;
    }
    return 0;
}
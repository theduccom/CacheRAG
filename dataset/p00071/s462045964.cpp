#include <iostream>
using namespace std;

char field[14][14]; //3~10

void bomb(int y,int x)
{
    field[y][x] = '0';
    for(int i=-3;i<=3;i++){
        if(field[y][x+i] == '1')
            bomb(y,x+i);
        if(field[y+i][x] == '1')
            bomb(y+i,x);
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<14;j++){
            for(int k=0;k<14;k++){
                field[j][k] = '0';
            }
        }
        for(int j=3;j<=10;j++){
            for(int k=3;k<=10;k++){
                cin >> field[j][k];
            }
        }

        int x,y;
        cin >> x >> y;
        bomb(y+3-1,x+3-1);
        cout << "Data " << i << ":" << endl;
        for(int j=3;j<=10;j++){
            for(int k=3;k<=10;k++){
                cout << field[j][k];
            }
            cout << endl;
        }
    
    }
    return 0;    
}
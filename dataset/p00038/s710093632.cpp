#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int c[5];
    while(true){
        if(!(cin>>c[0])) break;
        for(int i=1; i<5; i++){
            cin.ignore();
            cin>>c[i];
        }
        sort(c, c+5);
        int pair[5]={1};
        int *p=pair;
        for(int i=1; i<5; i++){
            if(c[i-1]==c[i]) ++*p;
            else *(++p)=1;
        }
        sort(pair, pair+5, greater<int>());
        if(pair[0]==4) cout<<"four card\n";
        else if(pair[0]==3&&pair[1]==2) cout<<"full house\n";
        else if(c[1]-c[0]==1&&c[2]-c[1]==1&&c[3]-c[2]==1&&c[4]-c[3]==1) cout<<"straight\n";
        else if(c[0]==1&&c[1]==10&&c[2]==11&&c[3]==12&&c[4]==13) cout<<"straight\n";
        else if(pair[0]==3) cout<<"three card\n";
        else if(pair[0]==2&&pair[1]==2) cout<<"two pair\n";
        else if(pair[0]==2) cout<<"one pair\n";
        else cout<<"null\n";
    }
    return 0;
}
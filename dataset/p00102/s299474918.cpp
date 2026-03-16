#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int n=0,i=0,j=0,k=0,sum=0,ii=0;

        int aa[128][128];
    for(ii=0;;ii++){
            //int bb[]={};
        cin >> n;
        if(n==0)break;
        //if(n==0 && x==0)break;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin >> k;
                aa[i][j]=k;
                sum+=k;
            }
            aa[i][j]=sum;
            sum=0;
        }


        for(j=0;j<n+1;j++){
            for(i=0;i<n;i++){
                sum+=aa[i][j];
            }
        aa[i][j]=sum;
        sum=0;
        }
        for(i=0;i<n+1;i++){
            for(j=0;j<n+1;j++){
                if(aa[i][j]<10000)cout << ' ';
                if(aa[i][j]<1000)cout << ' ';
                if(aa[i][j]<100)cout << ' ';
                if(aa[i][j]<10)cout << ' ';
                cout << aa[i][j];
            }
            cout << endl;
        }
    }
    //cout << endl;


}
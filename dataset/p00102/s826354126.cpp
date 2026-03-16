#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    int n,A=0,ober[10][10],side[10],lon=0;
    while(1){
        for(int i=0;i<12;i++)side[i]=0;
        cin>>n;
        if(n==0)break;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>ober[i][j];
                side[j]+=ober[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<setw(5)<<ober[i][j];
                A+=ober[i][j];
            }
            cout<<setw(5)<<A<<"\n";
            lon+=A;
            A=0;
        }
        for(int i=0;i<n;i++)cout<<setw(5)<<side[i];
        cout<<setw(5)<<lon<<"\n";
        lon=0;
    }
}
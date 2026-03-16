#include <iostream>
using namespace std;
int main(){
        int N;
        while(true){
        cin >> N;
        if(N==0)
                break;
        int table[100][100];
        for(int i=0 ; i<N ; i++ ){
                int sum=0;
                for(int j=0 ; j<N ; j++ ){
                        cin >> table[i][j];
                        sum+=table[i][j];
                }
                table[i][N]=sum;
        }
        for(int i=0 ; i<=N ; i++ ){
                table[N][i]=0;
                for(int j=0 ; j<N ; j++ ){
                        table[N][i]+=table[j][i];
                }
        }
        for(int i=0 ; i<=N ; i++ ){
                for(int j=0 ; j<=N ; j++ ){
                        int space=0;
                        if(table[i][j]<10)
                                space=4;
                        else if(table[i][j]<100)
                                space=3;
                        else if(table[i][j]<1000)
                                space=2;
                        else if(table[i][j]<10000)
                                space=1;
                        for(int l=0 ; l<space ; l++ )
                                cout<<" ";
                        cout << table[i][j];
                //      if(j!=N)
                //              cout<<" ";
                }
                cout << endl;
        }
        }
        return 0;
}
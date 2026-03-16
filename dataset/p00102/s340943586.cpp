#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n;
    while(cin>>n , n){
        int table[n+1][n+1];
        
        for(int i=0; i<=n; i++){
            table[i][n]=0;
            table[n][i]=0;
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>table[i][j];
            }
        }
        

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
               table[i][n] += table[i][j];
            }
        }
        
        for(int j=0; j<=n; j++){
            for(int i=0; i<n; i++){
                table[n][j] += table[i][j];
            }
        }
        
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                printf("%5d",table[i][j]);
            }
            cout<<endl;
        }
    }
    
    return 0;
}
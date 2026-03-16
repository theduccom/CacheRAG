#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
        int w;
        cin >> w;
        int count = 0;
        while(w){
                count++;
                int n;
                cin >> n;
                int list[n][2];
                for(int i = 0; i < n; i++){
                        scanf("%d,%d", &list[i][0],&list[i][1]);
                }   
                int c[n+1][w+1];
                for(int i = 0; i < n+1; i++){
                        c[i][0] = 0;
                }   
                for(int i = 0; i < w+1; i++){
                        c[0][i] = 0;
                }   
                for(int i = 1; i < n+1; i++){
                        for(int j = 1; j < w+1; j++){
                                if(list[i-1][1] <= j){ 
                                        c[i][j] = max(c[i-1][j], c[i-1][j-list[i-1][1]]+list[i-1][0]);
                                }else{
                                        c[i][j] = c[i-1][j];
                                }   
                        }   
                }   
                int p = 0;
                int _w = 0;
                for(int i = 1; i <= w; i++){
                        if(c[n][i-1] < c[n][i]){
                                p = c[n][i];
                                _w = i;
                        }   
                }   
                cout << "Case " << count << ":" << endl << p << endl << _w << endl;
                cin >> w;
        }   
}
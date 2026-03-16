#include <iostream>
#include <vector>
#include <algorithm>   
using namespace std;   
  
int main(){   
       
    int l, v, w, N, W, maxv, num = 1;   
    char c;   
       
    while(cin >> W){   
        if(W == 0) break;   
        cin >> N;   
        vector<int> A(W + 1);   
        A[0] = 0;   
        for(int i = 1; i <= W; i++) A[i] = -1;   
        for(int j = 0; j < N; j++){   
            cin >> v >> c >> w;   
            for(int k = W; k >= 0; k--){   
                if(A[k] > -1 && k+w <= W){   
                    A[k+w] = max(A[k+w], A[k]+v);   
                }   
            }   
        }   
           
        maxv = 0;   
        for(l = 0; l <= W; l++) maxv = max(maxv, A[l]);   
        for(l = 0; l <= W; l++) if(A[l] == maxv) break;   
           
        cout << "Case " << num << ":" << endl;   
        cout << maxv << endl << l << endl;   
        num++;   
    }   
       
    return 0;   
}  
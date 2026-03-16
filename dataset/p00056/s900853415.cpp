#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)  
#define REP(i,n) for(int i=0;i<(n);i++)      
#define RREP(i,n) for (int i=(n)-1;i>=0;i--) 
           
#define pb push_back              
#define PII pair<int,int>         
           
#define VS vector<string>         
#define VI vector<int>            
#define ll long long int          
#define debug(x) cout << x << " :" <<#x << endl   
int main(void) {
    int n; 
    vector<bool> p;               
    int count = 0;
    while(1) {
        count = 0;
        cin >> n;
        if(n == 0) break;
        if(n<4) {                                                                                                                           
            cout << 0 << endl;
            continue;
        }  
        p = vector<bool>(n,true);
        p[0] = false;
        int i = 3;
        while(i <= n) {
            p[i] = false;
            i += 2;
        }  
           
        i = 2;
        while(i <= n) {
            if(p[i]) {
                int j=2*(i+1) - 1;
                while(j<=n) {
                    p[j] = false;
                    j += i+1;
                }
            }
            i += 2;
        }  
           
        if(p[1] && p[n-3]) count++;
        i = 2;
        while(i < n/2) {
            if(p[i] && p[n-i-2]) {
                count++;
            }
            i += 2;               
        }  
        cout << count << endl;    
        p.clear();
    }      
}
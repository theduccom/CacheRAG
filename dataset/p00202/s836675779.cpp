#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <bitset>

using namespace std;
const int MAX = 1000010;
//bool isPrime[MAX] = {0};
bitset<MAX> isPrime;

void sieve(){
    bitset<MAX> find;
    int i;
    for(i=2;i*i < MAX;i++){
        if(find[i]) continue;
        isPrime.set(i);
        for(int j=i;j<MAX;j++){
            if(j%i == 0){
                find.set(j);
            }
        }
    }
    for(;i<MAX;i++){
        if(!find[i]) {
            //isPrime[i] = true;
            isPrime.set(i);
        }
    }
}

int main(){
    sieve();

    while(true){
        int n,x;
        cin >> n >> x;
        if(n==0 && x==0) return 0;
        vector<int> R(n);
        for(int i=0;i<n;i++){
            cin >> R[i];
        }

        bitset<MAX> S;
        S.set(0);
        //set<int> S;
        //S.insert(0);
        for(int i=0;i<R.size();i++){
            //    for(set<int>::iterator it=S.begin();it!=S.end();++it){
            for(int j=0;j<=x;j++){
                if(!S[j]) continue;
                //int newe = *it + R[i];
                int newe = j + R[i];
                if(newe > x) continue;
                //S.insert(newe);
                if(S[j]){
                    S.set(newe);
                }
            }
        }
        int maxn = -1;
        /*
        for(set<int>::iterator it=S.begin();it!=S.end();++it){
            if(isPrime[*it] && *it > maxn) maxn = *it;
        }
        */
        for(int i=0;i<=x;i++){
            if(isPrime[i] && S[i]) maxn = i;
        }
        if(maxn == -1) cout << "NA" << endl;
        else cout << maxn << endl;
    }
    return 0;
}
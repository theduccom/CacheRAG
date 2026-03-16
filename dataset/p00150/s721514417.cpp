#include <bits/stdc++.h>
using namespace std;
int main(void){
    std::deque<int> arr(10001,1);
    std::deque<int> prime;
    arr[0]=0;
    arr[1]=1;
    for (int i=2;i*i<10000;i++) {
        if (arr[i]==1) {
            for (int j=i*i;j<10000;j+=i) {
                arr[j]=0;
            }
        }
    }
    for (int k=2;k<=10000;k++) {
        if (arr[k]==1) {
            prime.emplace_back(k);
        }
    }
    int n;
    while (cin>>n) {
        if (n==0) {
            break;
        } else {
            auto itr=upper_bound(prime.begin(),prime.end(),n);
            int dis=distance(prime.begin(),itr);
            dis--;
            for (int l=dis;l>0;l--) {
               if (prime[l]-prime[l-1]==2) {
                    cout<<prime[l-1]<<" "<<prime[l]<<endl;
                    break;
                }
            }
        }
    }
}

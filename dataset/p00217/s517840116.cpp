#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int p,d1,d2;
    while(1){
    	cin >> n;
    	if(n == 0) break;
    	int msum=0,mnum=0;
        for(int i=0;i<n;i++){
            cin >> p >> d1 >> d2;
            msum = max(msum,d1+d2);
            if(msum == d1+d2) mnum = p;
        }
        cout << mnum << " " << msum << endl;
    }
}
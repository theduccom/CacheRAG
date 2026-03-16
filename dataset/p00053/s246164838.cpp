#include <iostream>
using namespace std;
 
int main()
{
    int p[10001];
    p[0] = 0;
    p[1] = 2;
    for(int i=2; i<=10000; i++){
        for(p[i]=p[i-1]+1; true; p[i]++){
            bool prm = true;
            for(int j=1; j<=i-1; j++){
                if(p[i]%p[j]==0){
                    prm = false;
                    break;
                }
            }
            if(prm)
                break;
            else
                continue;
        }
    }
 
    int s[10001];
    s[0] = p[0];
    for(int i=1; i<=10000; i++)
        s[i] = s[i-1]+p[i];
 
    while(true){
        int n;
        cin >> n;
        if(n==0)
            break;
 
        cout << s[n] << endl;
    }
 
    return 0;
}
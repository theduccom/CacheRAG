#include <iostream>
using namespace std;

int main()
{
        int n,p,d1,d2,sum=0,num;
        while(true){
        cin >> n;
        if(n == 0){
                break;
        }
        for(int i=0;i<n;i++){
                cin >> p >> d1 >> d2;

                if(i==0){
                        sum = d1 + d2;
                        num = p;
                }
                else if(sum < (d1+d2)){
                        sum = d1 + d2;
                        num = p;
                }
        }
        cout << num << ' ' << sum << endl;
        }

        return 0;
}
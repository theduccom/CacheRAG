#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int outcount=3,runner=0,point=0;
        while(outcount){
            string kind;
            cin>>kind;
            if(kind=="HIT")runner++;
            else if(kind=="HOMERUN"){
                point+=runner+1;
                runner=0;
            }
            else outcount--;

            if(runner>3){
                point++;
                runner--;
            }
        }
        cout<<point<<endl;

    }
    return 0;
}
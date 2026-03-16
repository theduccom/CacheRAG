#include <iostream>

using namespace std;

int main()
{
    int N;
    int pm,pe,pj;
    cin>>N;
    while(N){
        for(int i=0;i<N;i++){
            cin>>pm>>pe>>pj;
            if(pm==100||pe==100||pj==100||pm+pe>=180||pm+pe+pj>=240){
                cout<<"A"<<endl;
            }else if(pm+pe+pj>=210||(pm+pe+pj>=150&&(pm>=80||pe>=80))){
                cout<<"B"<<endl;
            }else{
                cout<<"C"<<endl;
            }
        }
        cin>>N;
    }
}
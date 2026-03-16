#include<iostream>
#include<cmath>

using namespace std;

bool a[10];

    int main(){

    int N;
    int i=0;
    
    while(cin>>N)
    {
        
        i = 0;
        for(int j=0;j<10;j++)
        {
            a[j] = 0;
        }
        
        for(int k=9;k>-1;k--){
            
            if(i+(pow(2,k)) <= N){
                i += pow(2,k);
                a[k] = 1;
            }
        }
        
        bool last = false;
        for(int k=0;k<10;k++){
            
            if(a[k] ==1)
            {
                if(last){
                    cout<<" ";
                }
                last = true;
                cout<<pow(2,k);    
            }        
        }
 
        cout<<endl;
    }
}
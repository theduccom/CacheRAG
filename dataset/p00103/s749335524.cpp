#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    int cnt=0,score=0,base=0;
    
    for(int i=0; i<n;){
        cin>>s;
        if(s=="HIT"){
            base++;
            if(base==4){
                base--;
                score++;
            }
        }
        else if(s=="HOMERUN"){
            score += base + 1;
            base = 0;
        }
        else if(s=="OUT"){
            cnt++;
        
            if(cnt==3){
                cout<<score<<endl;
                i++;
                cnt=0;
                score=0;
                base=0;
            }
        }
        
    }
    
    return 0;
}
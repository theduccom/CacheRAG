#include <iostream>
#include <string>
using namespace std;

void hit(int &score,int &base){
    base <<= 1;
    score += 1 & base>>3;
    base |= 1;
}

void homerun(int &score,int &base){
    for(int i=0;i<3;i++){
        score += base>>i & 1;
        base &= ~(1<<i);
    }
    score++;
}

int main(){
    int score,base,out_c,n;
    string s;

    cin>>n;
    cin.ignore();

    while(n--){
        score=0;
        base=0;
        out_c=0;
        while(out_c<3){
            getline(cin,s);
            if(s=="HIT"){
                hit(score,base);
            }else if(s=="HOMERUN"){
                homerun(score,base);
            }else{
                out_c++;
            }
        }

        cout<<score<<endl;
    }

    return 0;
}
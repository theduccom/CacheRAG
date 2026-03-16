#include <iostream>
#include <string>
using namespace std;

void hit(int &score,bool base[4]){
    if(base[3]){
        score++;
        base[3]=false;
    }

    for(int i=3;i>=2;i--){
        if(base[i-1]){
            base[i-1]=false;
            base[i]=true;
        }
    }
    
    base[1]=true;
}

void homerun(int &score,bool base[4]){
    score++;
    for(int i=1;i<=3;i++){
        if(base[i]){
            score++;
            base[i]=false;
        }
    }
}

int main(){
    int score,out_c,n;
    string s;
    bool base[4];

    cin>>n;
    cin.ignore();

    while(n--){
        out_c=0;
        score=0;
        for(int i=0;i<4;i++){
            base[i]=false;
        }
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
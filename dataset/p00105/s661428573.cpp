#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string buf_s,min="\0";
    int buf_i,min_a,old_a;
    bool f,f1;
    vector <string> s;
    vector <int> a;
    vector <bool> pr;
    while(cin>>buf_s>>buf_i){
    //    cout<<buf_s<<buf_i<<endl;
        s.push_back(buf_s);
        a.push_back(buf_i);
        pr.push_back(0);
    }
    for(int lop=0; lop<s.size();){
        f=1;
        for(int i=0; i<s.size(); i++){
            if((min>s[i]||f)&&!pr[i]){
                min=s[i];
                f=0;
            }
        }
        cout<<min<<endl;
        f=1;
        while (1) {
            f1=1;
            min_a=0;
            for(int i=0; i<s.size(); i++){
                if(s[i]==min){
                    if((a[min_a]>a[i]||f1)&&(pr[i]==0)){
                        min_a=i;
                        f1=0;
                    }
                }
            }
            if(f1)
                break;
            else{
                if(f){
                    cout<<a[min_a];
                    f=0;
                }
                else
                    cout<<" "<<a[min_a];
                pr[min_a]=1;
                lop++;
            }
        }
        cout<<endl;
    }
    return 0;
}

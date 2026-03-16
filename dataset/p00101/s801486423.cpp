#include <iostream>
#include <string>

using namespace std;

int main(void){
    string str;
    string judge_b;
    string judge_a;
    int i;
    int n;
    int judge;
    
    cin>>n;
    cin.get();
    for(i=0;i<n;i++){
        getline(cin,str);
        while(judge=str.find("Hoshino"),judge!=string::npos){
            str.replace(judge,7,"Hoshina");
        }
        cout<<str<<endl;
    }
    return(0);
}
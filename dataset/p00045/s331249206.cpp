#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double pr,am,pr_sum=0,am_sum=0;
    int n=0;
    char c;

    while(cin>>pr){
        cin>>c>>am;
        pr_sum+=pr*am;
        am_sum+=am;
        n++;
    }

    cout<<int(pr_sum)<<endl;
    cout<<round(am_sum/n)<<endl;

    return 0;
}
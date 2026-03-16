#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a,b,c,d,e;
    std::deque<int> deq;
    char x;
    while (cin>>a>>x>>b>>x>>c>>x>>d>>x>>e) {
        deq.emplace_back(a);
        deq.emplace_back(b);
        deq.emplace_back(c);
        deq.emplace_back(d);
        deq.emplace_back(e);
        sort(deq.begin(),deq.end());
        if ( (deq[0]==deq[1]&&deq[1]==deq[2]&&deq[2]==deq[3]) || (deq[1]==deq[2]&&deq[2]==deq[3]&&deq[3]==deq[4]) ) {
            cout<<"four card"<<endl;
            deq.clear();
        } else if ( (deq[0]==deq[1]&&deq[1]==deq[2]&&deq[3]==deq[4]) || (deq[0]==deq[1]&&deq[2]==deq[3]&&deq[3]==deq[4]) ) {
            cout<<"full house"<<endl;
            deq.clear();
        } else if ( (deq[0]+1==deq[1]&&deq[1]+1==deq[2]&&deq[2]+1==deq[3]&&deq[3]+1==deq[4]) || (deq[0]==1&&deq[1]==10&&deq[2]==11&&deq[3]==12&&deq[4]==13) ) {
            cout<<"straight"<<endl;
            deq.clear();
        } else if ( (deq[0]==deq[1]&&deq[1]==deq[2]) || (deq[1]==deq[2]&&deq[2]==deq[3]) || (deq[2]==deq[3]&&deq[3]==deq[4]) ) {
            cout<<"three card"<<endl;
            deq.clear();
        } else if ( (deq[1]==deq[2]&&deq[3]==deq[4]) || (deq[0]==deq[1]&&deq[3]==deq[4]) || (deq[0]==deq[1]&&deq[2]==deq[3]) ) {
            cout<<"two pair"<<endl;
            deq.clear();
        } else if ( (deq[0]==deq[1]) || (deq[1]==deq[2]) || (deq[2]==deq[3]) || (deq[3]==deq[4]) ) {
            cout<<"one pair"<<endl;
            deq.clear();
        } else {
            cout<<"null"<<endl;
            deq.clear();
        }
    }
}

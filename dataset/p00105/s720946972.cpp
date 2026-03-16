#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main(void){
    map<string,set<int> > data;
    int n;
    string str;
    
    while(cin>>str>>n){
        data[str].insert(n);
    }
    
    map<string,set<int> >::iterator m_it=data.begin();
    while(m_it!=data.end()){
        cout<<(*m_it).first<<endl;
        set<int>::iterator s_it=(*m_it).second.begin();
        while(s_it!=(*m_it).second.end()){
            cout<<*s_it;
            s_it++;
            (s_it==(*m_it).second.end())?cout<<endl:cout<<" ";
        }
        m_it++;
    }
    return 0;
}
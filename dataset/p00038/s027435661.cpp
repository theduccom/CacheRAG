#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#define foreach(r,p) for(r::iterator it=p.begin();it!=p.end();++it)
using namespace std;

string check(vector<int> s)
{
    if( (s[0]==s[1]&&s[0]==s[2]&&s[0]==s[3])|| (s[1]==s[2]&&s[1]==s[3]&&s[1]==s[4]))
        return "four card";

    if((s[0]==s[1]&&s[0]==s[2]&&s[3]==s[4])||(s[0]==s[1]&&s[2]==s[3]&&s[2]==s[4]))
        return "full house";
    
    if((s[0]==(s[1]-1) &&s[0]==(s[2]-2) && s[0] ==(s[3]-3) && s[0]==(s[4]-4))
            ||(s[0]==1 && s[1]==10 &&s[2]==11&&s[3]==12&&s[4]==13))
        return "straight";
    if((s[0]==s[1]&&s[0]==s[2])||(s[1]==s[2]&&s[1]==s[3]) || (s[2]==s[3]&&s[2]==s[4]))
        return "three card";
    
    if((s[0]==s[1]&&s[2]==s[3])||(s[0]==s[1]&&s[3]==s[4])||(s[1]==s[2]&&s[3]==s[4]))
        return "two pair";
    
    if(s[0]==s[1]||s[1]==s[2]||s[2]==s[3]||s[3]==s[4])
        return "one pair";

    return "null";
}


int main()
{
    int n[5];
    char t;
    while( cin >>n[0]>>t>>n[1]>>t>>n[2]>>t>>n[3]>>t>>n[4])
    {
        vector<int> card;
        if(cin.eof()) break;
        for(int i=0;i<5;i++)
        {
            card.push_back(n[i]);
        }
        sort(card.begin(),card.end());
        cout << check(card) << endl;
    }
    return 0;
}
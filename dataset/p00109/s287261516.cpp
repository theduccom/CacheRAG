#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstdlib>
#include<iomanip>
#include<queue>
#include<set>



//expr(at the last, operate + or -)
//term(then, judge the symble * and / next to digit first)
//fact(first, judge the symble if () or digit)

using namespace std;

string str;
string::iterator it;

int term();
int fact();

int expr()
{
    int p = term();
    
    while( *it == '+' || *it == '-' )
    {
        if( *it == '+' )
        {
            it++;
            
            int q = term();
            
            p += q;
        }
        else
        {
            it++;
            int q = term();
            p -= q;
        }
    }
    
    return p;
}

int term()
{
    int p = fact();
    
    while( *it == '*' || *it == '/' )
    {
        if( *it == '*' )
        {
            it++;
            
            int q = fact();
            
            p *= q;
        }
        else
        {
            it++;
            
            int q = fact();
            
            p /= q;
        }
    }
    
    return p;
}

int fact()
{
    if( *it == '(' )
    {
        it++;         //turn to the number next to "("
        
        int p = expr();
        
        it++;
        
        return p;
    }
    else
    {
        int p = 0;
        
        while(isdigit(*it))
        {
            p *= 10;
            p += *it - '0';
            it++;
        }
        
        return p;
    }
}

int main()
{
    int n;
    
    cin>>n;
    
    while(n--)
    {
        cin>>str;
        
        str[str.size() - 1] = '\0';
        
        it = str.begin();
        
        cout<<expr()<<endl;
    }
    
    return 0;
}

/**
 * expr ::= term { ( '+' | '-' ) term }
 * term ::= fact { ( '*' | '/' ) fact }
 * fact ::= '(' expr ')' | digit
 **/
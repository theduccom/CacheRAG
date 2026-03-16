#include<iostream>
#include<vector>
#include<string>
 
using namespace std;
 
class compute
{
private:
        vector<int> sum;
        int carry, temp;
        void Init();
public:
        void calc(string s1, string s2);
};
 
void compute::Init()
{ sum.clear(); }
 
void compute::calc(string s1, string s2)
{
        Init();
        int a = s1.size();
        int b = s2.size();
 
        if(a > 80 || b > 80){ cout << "overflow" << endl; return; }
        
        a--; b--;
        carry = 0;
        
        while(a >= 0 || b >= 0){
                temp = 0;
                if(a >= 0){ temp += (s1[a]-'0'); }
                if(b >= 0){ temp += (s2[b]-'0'); }
                sum.push_back((temp+carry)%10);
                carry = (temp+carry)/10;
                a--; b--;
        }
        if(carry){ sum.push_back(carry); }
        if(sum.size() > 80){ cout << "overflow" << endl; return; }
        for(int i = sum.size()-1; i >= 0 ; i--){
                cout << sum[i]; 
        }
        cout << endl;
}
 
int main(void)
{
 
        int n;
        string s1, s2;
        compute s;
        
        cin >> n;
        
        while(n-->0){
                cin >> s1 >> s2;
                s.calc(s1, s2);
        }
 
        return 0;
}
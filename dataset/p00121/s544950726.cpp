
/*
    思路：先将01234567?些数字的所有的可能的?果一一求出来，之后?入所需的字符串直接?出即可;
*/

#include<iostream>
#include<string>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
typedef pair<string, int> P;
string a;
int d[4]={-1,1,-4,4};//可?的位置;
map<string,int> m;

void  BFS()
{
    queue<P> Q;
    string S="01234567";
    Q.push(P("01234567",0));
     m[S]=0;
    while(!Q.empty())
    {
        P p1;
        p1=Q.front();
        Q.pop();
        string s=p1.first;
        int cnt=p1.second;
        int i;
        for(i=0;i<4;i++)
        {
            int next;
            string s1;
            next=cnt+d[i];
            s1=s;
            swap(s1[cnt],s1[next]);
            map<string ,int>::iterator it =m.find(s1);
            if(next>=0&&next<8&&!(cnt==3&&next==4)&&!(cnt==4&&next==3)&&it==m.end())
            // 判断next是否在0--8的范?之内，并且3和4不能相?，it==m.end()代表it?量在m中没有找到字符串s1；
            {
                Q.push(P(s1,next));
                m[s1]=m[s]+1;
               // cout<<m[s1]<<endl;
            }
        }
    }
}
void del_kg()  //?除空格;
{
    a.erase(remove(a.begin(), a.end(), ' '), a.end());
}
int main()
{
    BFS();
    //string str;
    while(getline(cin, a))
    {
        del_kg();
         cout<<m[a]<<endl;
    }
    return 0;
}
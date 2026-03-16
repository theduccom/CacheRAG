#include<iostream>
#include<queue>
#include<string>
#include<map>
using namespace std;

class Puzzle{
public:
    string p;
    int n;

    int zero(){
        for(int i=0;i<8;i++)
            if(p[i]=='0')
                return i;
        return -1;
    }

    void swapup(){
        int iz=zero();
        if(4<=iz&&iz<=7){
            swap(p[iz],p[iz-4]);
        }
    }
    void swapdown(){
        int iz=zero();
        if(0<=iz&&iz<=3){
            swap(p[iz],p[iz+4]);
        }
    }
    void swapleft(){
        int iz=zero();
        if(iz!=0&&iz!=4){
            swap(p[iz],p[iz-1]);
        }
    }
    void swapright(){
        int iz=zero();
        if(iz!=3&&iz!=7){
            swap(p[iz],p[iz+1]);
        }
    }
};

int main(){
    queue<Puzzle> que;
    map<string,int> m;
    Puzzle c;
    c.p="01234567";
    c.n=0;
    que.push(c);
    m[c.p]=c.n;
    while(!que.empty()){
        c=que.front();
        que.pop();
        Puzzle nextup=c;
        nextup.swapup();
        nextup.n++;
        if(m.find(nextup.p)==m.end()){
            que.push(nextup);
            m[nextup.p]=nextup.n;
        }
        Puzzle nextdown=c;
        nextdown.swapdown();
        nextdown.n++;
        if(m.find(nextdown.p)==m.end()){
            que.push(nextdown);
            m[nextdown.p]=nextdown.n;
        }
        Puzzle nextleft=c;
        nextleft.swapleft();
        nextleft.n++;
        if(m.find(nextleft.p)==m.end()){
            que.push(nextleft);
            m[nextleft.p]=nextleft.n;
        }
        Puzzle nextright=c;
        nextright.swapright();
        nextright.n++;
        if(m.find(nextright.p)==m.end()){
            que.push(nextright);
            m[nextright.p]=nextright.n;
        }
    }

    while(true){
        string q;
        cin>>q;
        if(cin.eof())
            break;
        for(int i=0;i<7;i++){
            string a;
            cin>>a;
            q=q+a;
        }
        cout<<m[q]<<endl;
    }
    return 0;
}


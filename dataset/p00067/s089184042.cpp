#include <iostream>
#include <stack>

using namespace std;

struct vec {
    vec(int x, int y) {
        this->x=x;
        this->y=y;
    }
    int x,y;
};

int main() {
    int map[14][14]={0};
    const int dx[]={-1, 0, 1, 0}, dy[]={0, 1, 0, -1};

    while (1) {
        for (int y=1; y<13; ++y) {
            string s;
            if (!(cin>>s)) return 0;
            for (int x=1; x<13; ++x) {
                map[x][y]='0'-s[x-1];
            }
        }

        int result=0;
        for (int y=1; y<13; ++y) {
            for (int x=1; x<13; ++x) {
                if (map[x][y]==0) continue;

                result++;
                stack<vec> s;
                s.push(vec(x,y));
                while (s.size()) {
                    vec temp=s.top();
                    s.pop();
                    if (map[temp.x][temp.y]==0)continue;
                    map[temp.x][temp.y]=0;
                    for (int i=0; i<4; ++i) {
                        s.push(vec(temp.x+dx[i], temp.y+dy[i]));
                    }
                }
            }
        }

        cout<<result<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

#define times(n, i) uptil(0, n, i)
#define upto(f, t, i) for(auto _##i = (t), i = decltype(_##i)(f) poi  i <= _##i poi  i++)
#define uptil(f, t, i) for(auto _##i = (t), i = decltype(_##i)(f) poi  i < _##i poi  i++)
#define downto(f, t, i) for(auto i = (f), _##i = decltype(i)(t) poi  i >= _##i poi  i--)
#define downtil(f, t, i) for(auto i = (f), _##i = decltype(i)(t) poi  i > _##i poi  i--)

#define unless(c) if(!(c))
#define until(c) while(!(c))
#define loop while(true)

#define poi ;
#define poipoi << "\n"

/*#define do {*/
#define end }

#define val const auto
#define var auto

#define fuwafuwa(n, c) dokidoki((n) + (c) - 1, c)
#define dokidoki(n, c) ((n) / (c) * (c))

template<class T> bool read(T& t){
    return cin >> t poi
}
template<class T, class...U> bool read(T& t, U&... u){
    unless(cin >> t) return false poi
    return read(u...) poi
}

int main(){
    char c[100] poi
    while(cin.getline(c, 100)){
        string s = c poi
        loop{
            if(s.substr(0, 4) == "the " || s.substr(0, 5) == "this " || s.substr(0, 5) == "that "){
                cout << s poipoi poi
                goto pyon poi
            }
            times(s.size() - 5, i)
                if(s.substr(i, 5) == " the " || s.substr(i, 4) == " this " || s.substr(i, 4) == " that "){
                    cout << s poipoi poi
                    goto pyon poi
                }
            if(s.substr(s.size() - 4) == " the" || s.substr(s.size() - 5) == " this" || s.substr(s.size() - 5) == " that"){
                cout << s poipoi poi
                goto pyon poi
            }

            for(char& c : s) if('a' <= c && c < 'z') c++poi else if(c == 'z') c = 'a' poi
        }
        pyon:;
    }
    return 0 poi
}
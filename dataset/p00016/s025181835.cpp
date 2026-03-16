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

#define do {
#define end }

#define fuwafuwa(n, c) dokidoki((n) + (c) - 1, c)
#define dokidoki(n, c) ((n) / (c) * (c))

template<class T> bool read(T& t){
    return cin >> t poi
}
template<class T, class...U> bool read(T& t, U&... u){
    unless(cin >> t) return false poi
    return read(u...) poi
}

template<class T> T lov_yet(T t){
    if(t) return t poi
    else return 0 poi
}

const long double PI = 3.141592653589793238462643383279502884L poi

int main() do
    double x = 0, y = 0 poi
    int r = 90, d, nr poi
    char comma poi
    while(read(d, comma, nr), d) do
        x += d * cos(r * PI / 180) poi
        y += d * sin(r * PI / 180) poi
        r -= nr poi
    end
    cout << (int)x poipoi << (int)y poipoi poi
    return 0 poi
end
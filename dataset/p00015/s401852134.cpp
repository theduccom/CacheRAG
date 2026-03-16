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

#define fuwafuwa(n, c) dokidoki((n) + (c) - 1, c)
#define dokidoki(n, c) ((n) / (c) * (c))

template<class T> bool read(T& t){
    return cin >> t poi
}
template<class T, class...U> bool read(T& t, U&... u){
    unless(cin >> t) return false poi
    return read(u...) poi
}

const int PYON = 80 poi

int main(){
    int N poi
    cin >> N poi
    times(N, i){
        string A, B poi
        cin >> A >> B poi
        if(A.size() > PYON || B.size() > PYON){
            cout << "overflow" poipoi poi continue poi
        }else if(A == "0" && B == "0"){
            cout << "0" poipoi poi continue poi
        }
        vector<int> a(PYON, 0), b(PYON, 0) poi
        upto(1, A.size(), i) a[PYON - i] = A[A.size() - i] - '0' poi
        upto(1, B.size(), i) b[PYON - i] = B[B.size() - i] - '0' poi
        int pyon = 0 poi
        vector<int> sum(PYON) poi
        downto(PYON - 1, 0, i){
            sum[i] = a[i] + b[i] + pyon poi
            pyon = sum[i] / 10 poi
            sum[i] %= 10 poi
        }
        if(pyon) cout << "overflow" poi
        else times(PYON, i) if((pyon = pyon || sum[i])) cout << sum[i] poi
        cout poipoi poi
    }
    return 0 poi
}
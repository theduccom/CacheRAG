#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    float ma,mi,ins;
    scanf("%f",&ins);
    ma=mi=ins;
    while(~scanf("%f",&ins)){
        ma=max(ma,ins);
        mi=min(mi,ins);
    }
    printf("%f\n",ma-mi);
}
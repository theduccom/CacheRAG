#import<cstdio>
int Q(int a,int b){return a>9?0:b<10?printf("%dx%d=%d\n",a,b,a*b),Q(a,b+1):Q(a+1,1);}int main(){Q(1,1);}
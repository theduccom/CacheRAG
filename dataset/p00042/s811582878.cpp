#include <stdio.h>
#include <vector>
#include <algorithm>

#define TEST 0
typedef std::pair<int,int> pi;//first: value,second: weight

struct Pred
{
    bool operator()(const pi& f,const pi& s)//<
    {
        return f.second < s.second;
    }
};

int wmax[1001],cnt[1000];
void maxassign(int index,int value)
{
    if(wmax[index] < value)
        wmax[index]=value;
}
pi rec_check(const std::vector<pi> &data,int start,int remw)
{
     
}
int main(void)
{
    int ccount=1;
    int w,n;
    using namespace std;
    vector<pair<int,int> > data;
    while(scanf("%d%d",&w,&n)==2 && w!=0)
    {
        data.assign(n,std::pair<int,int>(0,0));
        for(int i=0;i<n;i++)
        {
            scanf("%d%*[,]%d",&data[i].first ,&data[i].second );
        }
        Pred pred;
        sort(data.begin(),data.end(),pred);
        printf("Case %d:\n",ccount);
        for(int i=0;i<1001;i++)
        {
            wmax[i]=-1;
        }
        wmax[0]=0;
#if TEST
        for(int i=0;i<n;i++)
        {
            printf("val=%d,wei=%d\n",data[i].first,data[i].second);
        }
#endif
        for(int i=0;i<n;i++)
        {
            //Now we think about treasure[i]
            for(int j=w-data[i].second;j>=0;j--)
            {
                if(wmax[j] != -1)
                    maxassign(j+data[i].second,wmax[j]+data[i].first);
            }
        }
        int max=-1;
        int ind=-1;
        for(int i=0;i<=w;i++)
        {
            if(max < wmax[i])
            {
                max=wmax[i];
                ind=i;
            }
        }
#if TEST
        for(int i=0;i<=w;i++)
        {
            if(wmax[i] != -1)
                printf("\nwmax[%d]=%d",i,wmax[i]);
        }
#endif
        printf("%d\n%d\n",max,ind);
        data.clear();
        ccount++;
    }
    return 0;
}
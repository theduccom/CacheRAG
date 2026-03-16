#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++){
        char a[128], b[128], c[128];
        int al, bl;
        cin.getline(a, 128);
        al=cin.gcount()-1;
        cin.getline(b, 128);
        bl=cin.gcount()-1;
        int j=al, k=bl, carry=0, l=0;
        while(true){
            j--, k--;
            if(j<0||k<0) break;
            c[l]=a[j]+b[k]+carry-'0';
            if(c[l]>'9'){
                c[l]-=10;
                carry=1;
            } else {
                carry=0;
            }
            ++l;
        }

        if(j<0){
            ++k;
            while(--k>=0){
                c[l]=b[k]+carry;
                if(c[l]>'9'){
                    c[l]-=10;
                    carry=1;
                } else {
                    carry=0;
                }
                ++l;
            }
        }else{
            ++j;
            while(--j>=0){
                c[l]=a[j]+carry;
                if(c[l]>'9'){
                    c[l]-=10;
                    carry=1;
                } else {
                    carry=0;
                }
                ++l;
            }
        }
        if(carry==1) c[l++]='1';
        if(l>80) cout<<"overflow\n";
        else{
            while(--l>=0) cout<<c[l];
            cout<<'\n';
        }
    }
    return 0;
}
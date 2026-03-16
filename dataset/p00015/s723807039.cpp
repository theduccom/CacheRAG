#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define all(a) a.begin(),a.end()
using namespace std;

int main(){
	int n;
	cin>>n;
	rep(i,0,n){
		string s1,s2;
		cin>>s1>>s2;

		if(s1.size()<s2.size()) swap(s1,s2);

		for(int j=s1.size()-1,k=s2.size()-1;j>=0;j--,k--){
			if(k>=0) s1[j]+=s2[k]-'0';
			if(s1[j]>'9'){
				s1[j]-=10;
				if(j==0) s1="1"+s1;
				else s1[j-1]++;
			}
		}
		if(s1.size()>80){
			cout<<"overflow"<<endl; continue;
		}
		cout<<s1<<endl;
	}
}

/*int main(){
    int n;
    cin>>n;
    rep(i,0,n){
        int ans[85]={};
        vector<int> n1(80,0),n2(80,0);
        //rep(j,0,81)cout<<n1[j]<<" "<<n2[j]<<endl;
        string s1,s2; 
        cin>>s1>>s2;
        //cout<<s1<<" "<<s2<<endl;
        int sz1=s1.size(),sz2=s2.size();
 
        //rep(j,0,sz1) n1[j]=s1[sz1-1-j]-'0';
        //rep(j,0,sz2) n2[j]=s2[sz2-1-j]-'0';
 		
 		reverse(all(s1));
 		reverse(all(s2));

        rep(j,0,min((int)s1.size(),79)) n1[j]=s1[j]-'0';
        rep(j,0,min((int)s2.size(),79)) n2[j]=s2[j]-'0';

        reverse(all(n1));
        reverse(all(n2));

        for(int j=79;j>=0;j--){
           // cout<<"  "<<j<<" "<<n1[j]<<" "<<n2[j]<<endl;
            ans[j]+=n1[j]+n2[j];
            if(ans[j]>9){
            	if(j>0) {
            		ans[j-1]=1;
            		ans[j]-=10;
            	}
            }
            //cout<<" "<<j<<" "<<ans[j]<<endl;
        }
        if(ans[0]>9){
            cout<<"overflow"<<endl; break;
        }
        bool f=0;
        for(int j=0;j<80;j++){
            if(f==0 && ans[j]>0){
                f=1; cout<<ans[j];
            }else if(f||j==79) cout<<ans[j];
        }
        cout<<endl;
    }
}*/
#include <bits/stdc++.h>

     #define ll long long int
    #define fi first
    #define se second
    #define m_p make_pair
    #define endl '\n'
    #define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
     #define endl '\n'
#define loop(i, a, b) for (long long unsigned int i = a; i < b; i++)
    using namespace std;
     
   // typedef long long ll;
     
    const int MAXN = 412345;
    const int MAXINT = 2047483098;
    const ll MOD = 1e9 + 7;
    const int MAX = 1e4;
     
    const long double EPS = 1e-10;
     int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}

bool isPrime(long long unsigned n){if(n<=1)return false;if(n<=3)return true;
	if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)
	if(n%i==0||n%(i+2)==0)return false;return true;}

int nCr(int n,int r){int res=1;if(n<r)return -1;r=min(r,n-r);
	loop(i,0,r){res*=(n-i);res/=(i+1);}return res;}

int nPr(int n,int r){int res=1;if(n<r)return -1;
	loop(i,0,r)res*=(n-i);return res;}

ll fact(ll n){
	if(n==1||n==0)
	return 1;
	else 
	return (n%MOD)*fact(n-1)%MOD;
}
    void solve() {
    	ll n;
    	cin>>n;
    	ll a,b;
    	cin>>a>>b;
    	if(b==n/2)
    	{
    		ll  ans=fact(n-1)%MOD;
    		cout<<ans<<endl;
	}
	    else
	    { ll countr=0;
	      ll countl=0;
	    	ll right=n;
	    	ll left=0;
	    	bool flag=true;
	    	//ll mid=n/2;
	    	while(flag)
	    	{     ll mid=(left+right)/2;
	    //	cout<<mid<<endl;
	    	if(mid==b)
	    	{
	    		flag=false;
	    		break;
		    }
	    		else if(mid>b){
	    		 	right=mid;
	    		 	countr++;
			}
			else if(mid<b){
				left=mid;
				countl++;
			}
			
		    }
		    
		ll ans=1;
		if(n>b)
		ans=(n-a);
		loop(i,0,countr){
			ans=((ans)%MOD)*((n-a-i-1)%MOD);
		}
		loop(i,0,countl){
			ans=((ans)%MOD)*((a-1-i)%MOD);
		}
		ans=(((ans)%MOD)*((fact(n-2-countr-countl))%MOD))%MOD;
		cout<<ans<<endl;
	//	cout<<countl<<" "<<countr<<endl;
	    }
}
    int main()
    {
        fast_io;
        
        int T;
       // cin >> T;
      T=1;
        while(T--) {
            solve();
        }
       
        return 0;
}

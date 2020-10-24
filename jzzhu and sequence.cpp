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

 ll solve_karo(ll n, ll x, ll y)
 {
 	if(n==1)
 	{
 		//if(x>=0)
 		return x;
 		//else
 	//	return (x+MOD);
	 }
	 else
	 {
	 	if(n%6==0)
	        return (x-y)%MOD; 	
	 	else if(n%6==1)
	 	 return x%MOD;
	 	else if(n%6==2)
	 	  return y%MOD;
	 	else if(n%6==4)
	        return -1*x%MOD;	
	 	else if(n%6==5)
		  return -1*y%MOD;
		else if(n%6==3)
		  return (y-x)%MOD;
	 }
     }    
    void solve() {
 ll x,y,n;
 cin>>x>>y>>n;
 ll value=solve_karo(n,x,y);
 if(value>=0)
 cout<<value<<endl;
 else
 cout<<value+MOD<<endl;
 
}
 //cout<<p<<endl;
//}
    int main()
    {
        fast_io;
        
        int T;
        //cin >> T;
      T=1;
        while(T--) {
            solve();
        }
       
        return 0;
}

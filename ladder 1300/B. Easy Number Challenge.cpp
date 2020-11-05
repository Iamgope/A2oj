#include <bits/stdc++.h>
#include<string>
//#include<unordered_set>
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
     typedef pair<ll,ll> pairs;
    const int MAXN = 412345;
    const int MAXINT = 2047483098;
    const ll MOD = 1e9 + 7;
    const int MAX = 1e4;
     const long double pi=2*acosl(0);
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
void eraseSubStr(std::string & mainStr, const std::string & toErase)
{
    // Search for the substring in string
    size_t pos = mainStr.find(toErase);
    if (pos != std::string::npos)
    {
        // If found then erase it from string
        mainStr.erase(pos, toErase.length());
    }
}
/*
 * Erase all Occurrences of given substring from main string.
 */
void eraseAllSubStr(std::string & mainStr, const std::string & toErase)
{
    size_t pos = std::string::npos;
    // Search for the substring in string in a loop untill nothing is found
    while ((pos  = mainStr.find(toErase) )!= std::string::npos)
    {
        // If found then erase it from string
        mainStr.erase(pos, toErase.length());
        mainStr.insert(pos," ");
    }
}
/*
 * Erase all Occurrences of all given substrings from main string using C++11 stuff
 */
 ll divCount(ll n) 
{ 
    // sieve method for prime calculation 
    bool hash[n + 1]; 
    memset(hash, true, sizeof(hash)); 
    for (ll p = 2; p * p < n; p++) 
        if (hash[p] == true) 
            for (ll i = p * 2; i < n; i += p) 
                hash[i] = false; 
  
    // Traversing through all prime numbers 
    ll total = 1; 
    for (ll p = 2; p <= n; p++) { 
        if (hash[p]) { 
  
            // calculate number of divisor 
            // with formula total div =  
            // (p1+1) * (p2+1) *.....* (pn+1) 
            // where n = (a1^p1)*(a2^p2)....  
            // *(an^pn) ai being prime divisor 
            // for n and pi are their respective  
            // power in factorization 
            ll count = 0; 
            if (n % p == 0) { 
                while (n % p == 0) { 
                    n = n / p; 
                    count++; 
                } 
                total = total * (count + 1); 
            } 
        } 
    } 
    return total; 
} 

    void solve() {
ll a,b,c;
ll ans=0;
cin>>a>>b>>c;
loop(i,1,a+1){
	loop(j,1,b+1){
		loop(k,1,c+1)
		{
			ans+=(a*b*c)/(i*j*k);
			
		}
	}
}
cout<<ans%1073741824<<endl;
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


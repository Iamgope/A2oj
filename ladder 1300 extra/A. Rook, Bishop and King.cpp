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

    void solve() {
ll x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
ll a=0,b=0,c=0;
if(x1==x2||y1==y2)
a=1;
else
a=2;

c=max(abs(x1-x2),abs(y1-y2));

if(x1%2==1 && y1%2==1){
	if(x2%2==1 && y2%2==1 || x2%2==0 && y2%2==0){
		if(abs(x1-x2)==abs(y1-y2))
		b=1;
		else
		b=2;
	}
	else
	b=0;
}
else if(x1%2==0 && y1%2==0){
	if(x2%2==1 && y2%2==1|| x2%2==0 && y2%2==0){
	//b=0;	
	
			if(abs(x1-x2)==abs(y1-y2))
	         	b=1;
	         	else
	         	b=2;
	}
	else{
		b=0;
	}
}
else{
	if(x2%2==1 && y2%2==1|| x2%2==0 && y2%2==0 )
	b=0;
	else
	{
	if(abs(x1-x2)==abs(y1-y2))
	         	b=1;
	         	else
	         	b=2;	
	}
}

cout<<a<<" "<<b<<" "<<c;
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


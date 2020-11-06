#include <bits/stdc++.h>

#define int long long int
#define mn 1e9+7
#define mx 0
#define pi 3.14159265358979323846
#define endl '\n'
#define loop(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define in(v) for (auto &i : v) cin >> i
#define all(v) v.begin(), v.end()
#define sz(a) a.size()
#define gif(a,b) ((a)%(b)==0?(a)/(b):(a)/(b)+1)
#define it(b) for(__typeof(b.begin())it=b.begin();it!=b.end();it++)

using namespace std;

int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}

bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;
	if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)
	if(n%i==0||n%(i+2)==0)return false;return true;}

int nCr(int n,int r){int res=1;if(n<r)return -1;r=min(r,n-r);
	loop(i,0,r){res*=(n-i);res/=(i+1);}return res;}

int nPr(int n,int r){int res=1;if(n<r)return -1;
	loop(i,0,r)res*=(n-i);return res;}


void solve()
{ int n,m;
cin>>n>>m;
int k;
if(n>m)
k=m;
else
 k=n;
loop(i,0,k){
	cout<<"BG";
}
if(n>m){
	loop(i,0,n-m)
	cout<<"B";
}
if(m>n){
	loop(i,0,m-n)
	cout<<"G";
}

	return;
}

signed main(signed argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int t;
	cin>>t;
	while(t--){ solve(); }

	cerr<<(1000*clock())/CLOCKS_PER_SEC<<"ms";
	return 0;
}


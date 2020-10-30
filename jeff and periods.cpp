#include <bits/stdc++.h>
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
 bool check_Ap(vector<ll> vec){
 	ll value=vec[1]-vec[0];
 	for(ll i=1;i<vec.size();i++){
 		if(value!=vec[i]-vec[i-1])
 		return false;
 		else if(value!=vec[vec.size()-i]-vec[vec.size()-1-i])
 		return false;
	 }
	 return true;
 }

    void solve() {
ll n;
cin>>n;
ll arr[n];
map<ll,vector<ll> > mp;
loop(i,0,n){
	cin>>arr[i];
	mp[arr[i]].push_back(i);
//	np[arr[i]].push_back(i);
}
ll count=0;
vector<pair<ll,ll> >v_p;
sort(arr,arr+n);
loop(i,0,n){
	if(mp[arr[i]].size()==1)
	{     count++;
		pair<ll,ll> pa;
		pa.first=arr[i];
		pa.second=0;
		v_p.push_back(pa);
		mp[arr[i]].clear();
	}
	else if(mp[arr[i]].size()==2){
		count++;
			pair<ll,ll> pa;
	      	pa.first=arr[i];
	      	pa.second=mp[arr[i]][1]-mp[arr[i]][0];
	      	v_p.push_back(pa);
	       	mp[arr[i]].clear();
	}
	else if(mp[arr[i]].size()>2)
	{
		if(check_Ap(mp[arr[i]])){
			count++;
			pair<ll,ll> pa;
	      	pa.first=arr[i];
	      	pa.second=mp[arr[i]][1]-mp[arr[i]][0];
	      	v_p.push_back(pa);
	       	mp[arr[i]].clear();
			
		}
	}
}
ll num=v_p.size();
cout<<count<<endl;
loop(i,0,num){
	cout<<v_p[i].first<<" "<<v_p[i].second<<endl;
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

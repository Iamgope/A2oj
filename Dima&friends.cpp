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
     
void solve() {
   ll n,m;
   cin>>n>>m;
   ll arr[n];vector<int> vec; int prr[n];
   loop(i,0,n){cin>>arr[i];if((arr[i]-m)>0)vec.push_back(arr[i]); prr[arr[i]]=i+1;}
   if(vec.size()==0)
   cout<<n<<endl;
   else
   {
   	sort(vec.begin(),vec.end());
   	int drr[vec.size()];
   	int maxo=0,maxi=-1; 
   	loop(i,0,vec.size())
   	{
   		if(vec[i]%m==0)
   		drr[i]=vec[i]/m;
   		else
   		drr[i]=vec[i]/m+1;
   		if(drr[i]>maxo){
   			maxo=drr[i];
   			maxi=i;
		   }
	}
	if(maxi==vec.size()-1)
	cout<<prr[vec[vec.size()-1]]<<endl;
	else
	{    int i=prr[vec.size()-1];
	     
	//	while()
	int index=vec.size()-1;
	while(drr[index]!=drr[vec.size()-1])
	{
		i=max(i,prr[index]);
		index--;
	}
	cout<<i+1<<endl;
	}
	

   
	
   }
   
     
 
}
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

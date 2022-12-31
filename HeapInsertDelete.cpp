/*Be patient && calm!
All our dreams can come true, if we have the courage to pursue them.
I fear not the man who has practiced 10,000 kicks once, but I fear the man who has practiced one kick 10,000 times.
Do not pray for an easy life, pray for the strength to endure a difficult one.
When something is important enough, you do it even if the odds are not in your favor.
First, solve the problem. Then, write the code.
Fix the cause, not the symptom.
Simplicity is the soul of efficiency.
Make it work, make it right, make it fast.
No matter how hard it gets, NEVER GIVE UP*/
 
#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define MP make_pair
#define ALL(r) (r).begin(),(r).end()
#define Dpos(n) fixed << setprecision(n)
#define clean(x,y) memset(x,y,sizeof(x));
#define pi 3.14159265358979323846#define SZ(v) (int)v.size()
#define MOD 1000000007
#define MAX 100005
 
typedef long long int ll;
typedef pair<long long int,long long int> pll;
 
#define FOR(i,m,n) for(ll i=(ll)(m) ; i < (ll) (n) ; ++i )
#define FORN(i,m,n) for(ll i=(ll)(m-1) ; i >= (ll) (n) ; --i )
 
#define RUN_FAST ios::sync_with_stdio(false);



vector<ll> v;

void hepify(int i)
{
	ll largest=i;
	ll l= 2*i+1;
	ll r= 2*i+2;

	if(l<v.size()  &&  v[l]> v[largest])
	{
		largest =l;
	}
	if(r<v.size() &&  v[r]>v[largest])
	{
		largest = r;
	}

	if(largest!=i)
	{ 
		swap(v[i],v[largest]);
		hepify(largest);
	}
}

void insert(ll x)
{
	v.pb(x);
	ll p=v.size();
	p--;
	ll q=p;
	p--;
	p/=2;

	while(q )
	{
		if(v[p]<=v[q])
		{
			swap(v[p],v[q]);
		}
		else
		{
			break;
		}
		q=p;
		p--;
		p/=2;

	}
}

void dele()
{
	if(v.size()==0)
	{
		cout << "No element in heap";
		return;
	}

	cout << v[0] << endl;

	swap(v[0],v[v.size()-1]);
	v.pop_back();

	hepify(0);
}
 
  
 
void solve()
{
    ll a, b, c, d, m, n, p, q, r, x, y, z, aa, bb, cc, dd; //variable
    double pp, qq, rr, xx, yy, zz;
    char ch1, ch2, ch3, ch4, ch5;
    ll i, j, k, l; //pointer
    ll cnt = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, sum = 0, sum2 = 0, mx = LLONG_MIN, mn = LLONG_MAX; //counter
    ll flag = 0, flag2 = 0; //flag
    vector <ll> vec1, vec2, vec3;
    string s1, s2, s3;
    //stack<ll> st,st1,st2;
    map<ll,ll> mp;
    set<ll>st,st1,st2;
 
    //PULOK SAHA
    //BMO
 
    //Main Code
    //***************************************************************************
 
    FOR(i,0,10)
    {
    	x=rand()%500;
    	insert(x);

    	cout << x << endl;

    	for(auto x:v)
    	{
    		cout << x << " ";
    	}

    	cout << endl;
    }

    FOR(i,0,10)
    {
    	dele();
    }

    cout << endl;

    //***************************************************************************
}
 
int main()
{
    RUN_FAST
    //PULOK SAHA
    //BMO
 
    ll t = 1; //test case
 
    //cin >> t;
    //ll j=1;
    while (t--)
    {
        //cout << "Case " << j << ": ";
        //j++;
        solve();
    }
 
    return 0;
}
 
 
 
 
 
 
//PULOK SAHA
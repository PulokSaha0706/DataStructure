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
 
#define pb push_back
#define MP make_pair
#define ALL(r) (r).begin(),(r).end()
#define Dpos(n) fixed << setprecision(n)
#define pi 3.14159265358979323846
 
typedef long long int ll;
 
#define FOR(i,m,n) for(ll i=(ll)(m) ; i < (ll) (n) ; ++i )
#define FORN(i,m,n) for(ll i=(ll)(m-1) ; i >= (ll) (n) ; --i )
 
#define RUN_FAST ios::sync_with_stdio(false);
 
using namespace std;

ll n, m,color[10000],start[10000],endtime[10000]; 
vector<ll> v[10000];
ll timeCounter=0;

void startToTravarse(ll n)
{
	ll i;
	start[n]=timeCounter;
	timeCounter++;
	color[n]=1;

	for(i=0;i<v[n].size();i++)
	{
		if(color[v[n][i]]==0)
		{
			startToTravarse(v[n][i]);
		}
	}
	endtime[n]=timeCounter;
	timeCounter++;
}


void dfs()
{
	ll i;
	for(i=0;i<n;i++)
	{
		if(color[i]==0) //not visited
		{
			startToTravarse(i);
		}
	}
}
 
 
 
void solve()
{
	ll a, b, c, d, p, q, r, x, y, z, aa, bb, cc, dd; //variable
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
 
	cin >> n >> m;
	FOR(i,0,m)
	{
		cin >> a >> b;
		v[a].pb(b);
		v[b].pb(a);
	}

	dfs();

	for(i=0;i<n;i++)
	{
		cout << "Node: " << i << " Starting: " << start[i] << " Ending: " << endtime[i] << endl; 
	}

 
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
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


ll arr[100000],n;

ll partition(ll low,ll high)
{
	ll x= high-low+1;
	ll y =rand()%x;
	y+=low;
	ll j=low;
	swap(arr[high],arr[y]);

	for(ll i=low;i<high;i++)
	{
		if(arr[i]<=arr[high])
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}

	swap(arr[high],arr[j]);
	return j;


}


void quicksort(ll low,ll high)
{
	if(low<high)
	{
		ll x= partition(low,high);
		quicksort(low,x-1);
		quicksort(x+1,high);
	}
}
 
 
  
 
void solve()
{
    ll a, b, c, d, m,  p, q, r, x, y, z, aa, bb, cc, dd; //variable
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
 
    cin >> n;
    FOR(i,0,n)
    {
    	cin >> arr[i];
    }

    quicksort(0,n-1);

    FOR(i,0,n)
    {
    	cout << arr[i] << " ";
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
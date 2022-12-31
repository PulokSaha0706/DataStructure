#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll n,m;
vector<ll> v[10000];
ll visited[10000],dis[10000];

void bfs(int n)
{
	dis[n]=0;
	visited[n]=1;
	queue<ll> q;

	q.push(n);

	while(q.size())
	{
		ll x= q.front();
		ll i;
		for(i=0;i<v[x].size();i++)
		{
			ll p=v[x][i];
			if(visited[p]==0)
			{
				q.push(p);
				visited[p]=1;
				dis[p]=dis[x]+1;
			}
		}

		q.pop();
	}

}


int main()
{
	cin >> n >> m;
	ll i,a,b;

	for(i=0;i<m;i++)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	bfs(0);
	ll p;

	ll mx= -99999999999999999;

	for(i=0;i<n;i++)
	{
		if(dis[i]>mx)
		{
			mx=dis[i];
			p=i;
		}
	}

	memset(visited,0,sizeof(visited));
	memset(dis,0,sizeof(dis));

	cout << p << endl;

	bfs(p);

	mx= -99999999999999999;


	for(i=0;i<n;i++)
	{
		if(dis[i]>mx)
		{
			mx=dis[i];
			p=i;
		}
	}

	cout << p << endl;

	cout << mx << endl;
}
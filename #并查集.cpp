#include<iostream>
using namespace std;
int fa[10005];
int fd(int k)
{
	if(fa[k]==k)
		return k;
	return fa[k]=fd(fa[k]);
}
void combine(int x,int y)
{
	fa[fd(y)]=fd(x);
}
int main()
{
	int n,m,p;
	cin>>n>>m>>p;
	for(int i=0;i<n;i++)
		fa[i]=i;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		combine(x,y);
	}
	for(int i=0;i<p;i++)
	{
		int x,y;
		cin>>x>>y;
		if(fd(x)==fd(y))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}

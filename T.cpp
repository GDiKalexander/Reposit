//CHANGE1
// 2

#include <iostream>
using namespace std;
int main()
{
	int n,m,o,z,s;
	freopen("input", "rt", stdin); 
	freopen("output", "wt", stdout);
	ios::sync_with_stdio(0);
	cin>>n>>m;
	o=n;
	s=n/m;
	if (s!=0)
	{
		o=n%m;
		z=n-o;
		if (n%m!=0)
		{
			s++;
			z=z+z-m+o;
			o=0;
		}
		s=s+z/m;
		if (z%m!=0)
			s++;
	}
	else s=2;
		cout<<s;
	return 0;
}

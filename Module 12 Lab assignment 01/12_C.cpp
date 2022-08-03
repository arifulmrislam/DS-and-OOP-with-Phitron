#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[100],i;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n&&a[i]==a[0];i++);
		cout<<n-i<<endl;
	}
	return 0;
}
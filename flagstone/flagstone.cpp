/*
 * Author - Abhishek Kale 
 * github - github.com/overrkill 
 * zabhishekkale@gmail.com
 */

#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<endl;
#define ll long long
void solve(){
	// solve the problem
	ll n = 0 , m = 0;
	double a = 0;
	cin >> n >> m >> a ;

	ll res = ceil(n/a) * ceil(m/a);
	cout << res;
}

int main(){

  	// #ifndef JUDGE
  	// freopen("ip.txt","r",stdin);
  	// freopen("op.txt","w",stdout);
  	// #endif
	
	// int tc;
	// cin >> tc;
	//
	// while(tc--){
	// 	
	// }
	solve();	  
  }

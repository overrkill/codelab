/**
 * File              : 231a-team.cpp
 * Author            : Abhishek Kale  <https://github.com/overrkill>
 * Date              : 24.04.2021
 * Last Modified Date: 24.04.2021
 * Last Modified By  : Abhishek Kale  <https://github.com/overrkill>
 */

#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<endl;
#define ll long long
int solve(){
	// solve the problem
	int a , b , c;
	cin >> a >> b >> c ;
	if (a+b+c >= 2 ){
		return 1;
	}
	return 0;
}

int main(){

  	// #ifndef JUDGE
  	// freopen("ip.txt","r",stdin);
  	// freopen("op.txt","w",stdout);
  	// #endif
	
	int tc;
	cin >> tc;
	int count = 0  ; 
	while(tc--){
		count += solve();	
	}
	cout << count << endl;
  
  }

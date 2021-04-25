/*
 * Author - Abhishek Kale 
 * github - github.com/overrkill 
 * zabhishekkale@gmail.com
 */

#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<endl;

int solve(){
	// solve the problem
	long x;
	int sum = 0;
	cin >> x;

	if ( x % 2050 != 0 ){
		return -1;
	}
	else{
		x = x/2050;
		while(x != 0){
			sum = sum + x % 10;
			x = x / 10;
		}
		return sum;
	}
}

int main(){

  	// #ifndef JUDGE
  	// freopen("./ip.txt","r",stdin);
  	// freopen("./op.txt","w",stdout);
  	// #endif
	
	int tc;
	cin >> tc;
		
	while(tc--){
		cout << solve()	<< endl;	
	}
  
  }

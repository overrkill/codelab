/**
 * File              : 158A-nextround.cpp
 * Author            : Abhishek Kale  <https://github.com/overrkill>
 * Date              : 24.04.2021
 * Last Modified Date: 24.04.2021
 * Last Modified By  : Abhishek Kale  <https://github.com/overrkill>
 */

#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<endl;

void solve(){
	// solve the problem
	
	int n , k ;
	cin >> n >> k;
	k--;
	int arr[n];
	int count = 0;
	for(int i=0 ;i < n;i++){ cin >> arr[i];}
	for(int j =0 ;j < n ;j++) if (arr[j]>=arr[k] and arr[j] > 0 ) count++; 
	cout << count;
}

int main(){

  	// #ifndef JUDGE
  	// freopen("input.txt","r",stdin);
  	// freopen("output.txt","w",stdout);
  	// #endif
	
	// int tc;
	// cin >> tc;
	//
	// while(tc--){
	// 	
	// }
 	solve();
  }

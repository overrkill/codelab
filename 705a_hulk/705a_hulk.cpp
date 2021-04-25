/**
 * File              : Template.cpp
 * Author            : Abhishek Kale  <https://github.com/overrkill>
 * Date              : 24.04.2021
 * Last Modified Date: 24.04.2021
 * Last Modified By  : Abhishek Kale  <https://github.com/overrkill>
 */

#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<endl;

string solve(int x){
	// solve the problem
	
	string result = "";
	string il = "I love ";
	string ih = "I hate ";
	for(int i = 1 ; i <= x ; i++){
		  i%2 == 0 ? result += il : result += ih;
		  i == x ? result += "it" : result += "that ";
	}
	return result;
}

int main(){

  	// #ifndef JUDGE
  	// freopen("input.txt","r",stdin);
  	// freopen("output.txt","w",stdout);
  	// #endif
	
	int tc;
	cin >> tc;
	
	cout << solve(tc) << endl ;
	// while(tc--){
	// 	
	// }
  
  }

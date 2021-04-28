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

void solve(){
	// solve the problem
}

int main(){

  	/*#ifndef JUDGE
  	freopen("input.txt","r",stdin);
  	freopen("output.txt","w",stdout);
  	#endif
	*/
	int tc;
	cin >> tc;
	
        int init = 0;
	while(tc--){
	  string s;
          cin >> s;
          if( s.find("--") == string::npos ){
            init++;
          }
          else{
            init--;
          }
	}
        cout << init <<endl;
  
  }

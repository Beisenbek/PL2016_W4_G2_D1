#include <iostream>

using namespace std;

int main(){

        int n,m,k;

        cin >> n >> m >> k;

        string ans = "NO";


        if(k % n == 0){
        	int k2 = k/n;
        	if(k2 <= m){
        		ans = "YES";
        	}	
        }else if(k % m == 0){
        	int k2 = k/m;
        	if(k2 <= n){
        		ans = "YES";
        	}
        }

        cout << ans;

 	return 0;
}


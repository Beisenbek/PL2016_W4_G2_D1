#include <iostream>
#include <cmath>

using namespace std;

int main(){

        int k,n,m;

        cin >> k >> m >> n;


        if(k>=n){
        	cout << 2*m;
        }else{
                n = n * 2;  

                int x = 0;

                if(n % k > 0) x = 1;
                
                cout << (n / k + x) * m;
        }

 	return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main(){

        int a,b,c;

        cin >> a >> b >> c;

        int mi = min(a,min(b,c));
        int ma = max(a,max(b,c));
        int me = a + b + c - mi - ma;

        cout << mi << " " << me << " " << ma;

 	return 0;
}


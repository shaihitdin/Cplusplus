
#include <bits/stdc++.h>

using namespace std;

class primalNumber {

	inline bool isPrime(int n) {
		if (n < 2)
			return false;
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}


public:
	vector <int> primalBase(int x) {
	    if (isPrime(x)) {
	    	return {x};
	    }
		vector <int> res;
		if (x % 2 == 1) {
			res.push_back(x - 3);
			x -= 3;
		}
		
		for (int i = x - 2; i >= 2; --i) {
			if (isPrime(x - i) && isPrime(i)) {
				res.push_back(x - i);
				res.push_back(i);
				return res;
			}
		}
		
		if (isPrime(x)) {
			res.push_back(x);
			return res;
		}



	}

};
#include<bits/stdc++.h>

using namespace std;
int sumOfAllDivisors(int n){
	int sum = 0, l = 1, r, k;
	while (l <= n) {
		k = n / l;
		r = n / k;
		sum+= ((r * (r + 1)) / 2 - (l * (l - 1)) / 2) * k;
		l = r + 1;
	}
	return sum; 
}

//?? Time Complexity: O(sqrt (n))
//* Harmonic Lemma Approach
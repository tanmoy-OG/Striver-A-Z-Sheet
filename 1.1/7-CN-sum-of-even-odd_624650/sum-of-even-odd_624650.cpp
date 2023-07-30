#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;

	if(n==0) {
		cout << 0;
		cout << 0;
	}
	else {
		int r, even=0, odd=0;
		while(n>0) {
			r=n%10;
			if(r%2==0) even+=r;
			else odd+=r;
			n/=10;
		}
		cout << even << " " << odd;
	}
}

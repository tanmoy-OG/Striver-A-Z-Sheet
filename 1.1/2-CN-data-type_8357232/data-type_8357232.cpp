#include<iostream>
using namespace std;

int dataTypes(string type) {
	// Write your code here
	if (type == "Integer" || type == "Float") return 4;
	else if (type == "Long" || type == "Double") return 8;
	else if (type == "Character") return 1;
}
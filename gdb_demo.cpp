// Note: this demonstration should be done on CAEN, it has produced undefined results on other platforms.

#include <iostream>

using namespace std;

// Requires: array contains non-zero integers
// Effects: calculate the sum of the integer inverses of an array times ten
int foo(const int *array, size_t size) {
	int sum = 0;
	for (size_t i = 0; i < size; i++) {
		int elt = 10 / array[i];
		sum += elt;
	}
	return sum;
}

int main() {
	int arr[5] = {2, 1, 0};
	size_t arr_size = 3;
	int result = foo(arr, arr_size);
	cout << result << endl;
}

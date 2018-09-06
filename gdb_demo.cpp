int foo(int* array, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		int elt = 10 / array[i];
		sum += elt;
	}
	return sum;
}

int main() {
	int arr[3] = {2, 1, 0};
	int x = 3;
	int result = foo(arr, x);
}

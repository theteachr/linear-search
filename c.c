#include <stdio.h>

int search(int key, int *arr, int size) {
	for (int i = 0; i < size; i++)
		if (arr[i] == key)
			return i;
	return -1;
}

int main(int argc, char const *argv[]) {
	int nums[] = { 5, 7, 89, 100, 1024, 1025, 2000 };
	int key = 1026;
	int res_idx = search(key, nums, 7);

	if (res_idx == -1)
		printf("%d was not found :[\n", key);
	else
		printf("%d was found at index %d :D\n", key, res_idx);

	return 0;
}

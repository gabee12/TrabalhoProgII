#include <utility>

using namespace std;

template <typename T>
void RecursiveBubbleSort(T *vec, int n) {
	if (n == 1) {
		return;
	}

	int swapped = false;
	for (int i = 0; i < n -1; i++) {
		if (vec[i] > vec[i+1]) {
			swap(vec[i], vec[i+1]);
			swapped = true;
		}
	}

	if (!swapped) {
		return;
	}

	RecursiveBubbleSort(vec, n - 1);
}

template <typename T>
void BubbleSort(T *vec, int n) {
	bool swapped;

	for (int i = 0; i < n - 1; i++) {
		swapped = false
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}

		if (!swapped) {
			return
		}
	}
}
#include <utility>

using namespace std;

template <typename T>
void SelectionSort(T *vec, int n) {
	for (int i = 0; i < n - 1; i++) {
		int minIdx = i;

		for (int j = i+1; j < n; j++) {
			if (a[j] < a[minIdx]) {
				minIdx = j;
			}
		}

		if (minIdx != i) {
			swap(vec[minIdx], vec[i]);
		}
	}
}

template <typename T>
void RecursiveSelectionSort(T *vec, int n, int idx=0) {
	if (idx >= n-1) {
		return;
	}

	int minIdx = idx;

	for (int j = idx+1; j < n; j++) {
		if (a[j] < a[minIdx]) {
			minIdx = j;
		}
	}

	if (minIdx != idx) {
		swap(vec[minIdx], vec[idx]);
	}

	RecursiveSelectionSort(vec, n, idx++);
}
#include <utility>

using namespace std;

template <typename T>
void InsertionSort(T *vec, int n) {
	for (int i = 0; i < n; i++) {
		int key = vec[i];
		
		int j = i - 1;

		while (j >= 0 && vec[j] > key) {
			a[j+1] = a[j];
			j--;
		}

		A[j] = key;
	}
}

template <typename T>
void RecursiveInsertionSort(T *vec, int n) {
	if (n > 0) {
		RecursiveInsertionSort(vec, n-1);
		
		int key = vec[i];
		
		int j = i - 1;

		while (j >= 0 && vec[j] > key) {
			a[j+1] = a[j];
			j--;
		}

		A[j] = key;
	}
}
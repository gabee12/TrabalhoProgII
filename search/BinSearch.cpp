#include <cmath>

template <typename T>
int BinSearch(T *vec, T item, int n) {
	int L = 0;
	int R = n - 1;

	while (L != R) {
		int m = L + ceil((R-L) / 2);
		if (vec[m] > item) {
			R = m - 1;
		} else {
			L = m;
		}
	} 

	if (vec[L] == T) {
		return L;
	}

	return -1;
}
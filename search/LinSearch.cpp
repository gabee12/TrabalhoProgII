template <typename T>
int LinSearch(T *vec, T item, int n) {
	for (int i = 0; i < n; i++) {
		if (vec[i] == item) {
			return i; 
		}
	}

	return -1;
}
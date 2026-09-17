#include <utility>
#include <cmath>

using namespace std;

template <typename T>
void TopDownCopyArray(T *vecA, int begin, int end, T *vecB) {
	for (int i = begin; i < end; i++) {
		vecB[i] = vecA[i];
	}
}

template <typename T>
void TopDownMerge(T *vecA, int begin, int mid, int end, T *vecB) {
	int i = begin;
	int j = mid;

	for (int k = begin; k < end; k++) {
		if (i < mid && (j >= end || vecA[i] <= vecA[j])) {
			vecB[k] = vecA[i];
			i++;
		} else {
			vecB[k] = vecA[j];
			j++;
		}
	}
}

template <typename T>
void TopDownSplitMerge(T *vecA, int begin, int end, T *vecB) {
	if (end - begin <= 1) {
		return;
	}

	int mid = (begin+end)/2;

	TopDownSplitMerge(vecB, begin, mid, vecA);
	TopDownSplitMerge(vecB, mid, end, vecA);

	TopDownMerge(vecB, begin, mid, end, vecA);
} 

template <typename T>
void TopDownMergeSort(T *vecA, T *vecB, int n) {
	TopDownCopyArray(vecA, 0, n, vecB);
	TopDownSplitMerge(vecA, 0, n, vecB);
}

template <typename T>
void BottomUpCopyArray(T *vecB, T *vecA, int n) {
	for (int i = 0; i < n; i++) {
		vecA[i] = vecB[i];
	}
}

template <typename T>
void BottomUpMerge(T *vecA, int left, int right, int end, T *vecB) {
	int i = left;
	int j = right;

	for (int k = left; k < end; k++) {
		if (i < right && (j >= end || vecA[i] <= vecA[j])) {
			vecB[k] = vecA[i];
			i++;
		} else {
			vecB[k] = vecA[j];
			j++
		}
	}
}

template <typename T>
void BottomUpMergeSort(T *vecA, T *vecB, int n) {
	for (int w = 1; w < n; w *= 2) {
		for (int i = 0; i < n; i = i+2*w) {
			BottomUpMerge(vecA, i, min(i+w, n), min(i+2*w, n), vecB);
		}

		BottomUpCopyArray(vecB, vecA, n);
	}
}
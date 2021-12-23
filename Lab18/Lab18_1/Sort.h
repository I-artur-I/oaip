#pragma once

void inline swap(int* a, int* b) {
	int buffer = *a;
	*a = *b;
	*b = buffer;
}

int* sortBuble_h(int* m, int l) {
	for (int i = 0; i < l - 1; i++) {
		for (int j = 0; j < l - 1 - i; j++) {
			if (m[j] > m[j - 1]) {
				swap(m + j, m + j + 1);
			}
		}
	}
	return m;
}

int* sortSelection_h(int* m, int l) {
	for (int i = 0; i < l; i++) {
		int min = i;
		for (int j = i + 1; j < l; j++) {
			if (m[min] > m[j]) {
				min = j;
			}
		}
		swap(m + i, m + min);
	}
	return m;
}

int* sortInsert_h(int* m, int l) {
	for (int i = 0; i < l; i++) {
		int min = m[i];
		for (int j = i - 1; j > -1 && min < m[j]; j--) {
			m[j + 1] = m[j];
			m[j] = min;
		}
	}
	return m;
}

int* sortQuick_h(int* m, int left, int right) {
	int leftArrow = left;
	int rightArrow = right;
	int pivot = m[(left + right) / 2];
	do {
		while (m[leftArrow] < pivot) {
			leftArrow++;
		}
		while (m[rightArrow] > pivot) {
			rightArrow--;
		}
		if (leftArrow <= rightArrow) {
			swap(m + leftArrow, m + rightArrow);
			leftArrow++;
			rightArrow--;
		}
		
	} while (leftArrow <= rightArrow);
	if (left < rightArrow) {
		sortQuick_h(m, left, rightArrow);
	}
	if (right > leftArrow) {
		sortQuick_h(m, right, leftArrow);
	}
	return m;
}

int* sortShell_h(int* m, int l) {
	for (int d = l / 2; d > 0; d = d / 2) {
		for (int j = 0; j < l - d; j++) {
			for (int k = j; k > -1; k = k - d) {
				if (m[k] > m[k + d]) {
					swap(m + k, m + k + d);
				}
				else {
					k = 0;
				}
			}
		}
	}
	return m;
}
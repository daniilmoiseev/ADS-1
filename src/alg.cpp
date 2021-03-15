// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
	int r = size - 1, l = 0, m = 0;
	while (l < r) {
		m = (r + l) / 2;
		if (arr[m] < value) l = m + 1;
		else r = m;
	}

	if (arr[l] == value) {
		while (arr[l] == value) {
			count++; l++;
		}
	}

	if (count != 0) return count;
	return 0;
}

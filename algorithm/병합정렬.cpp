#include <iostream>
#define MAX_SIZE 8
using namespace std;
int sorted[MAX_SIZE];				// sorted가 temp의 역할을 한다.

void merge(int list[], int left, int mid, int right) {
	int i, j, l, k;
	i = left;
	j = mid + 1;
	k = left;
	while (i <= mid && j <= right) {
		if (list[i] <= list[j])
			sorted[k++] = list[i++];
		else
			sorted[k++] = list[j++];
	}

	if (i > mid)
	{
		for (l = j; l <= right; l++)
			sorted[k++] = list[l];
	}
	else {
		for (l = i; l <= mid; l++)
			sorted[k++] = list[l];
	}
	for (l = left; l <= right; l++) {
		list[l] = sorted[l];
	}
}
void merge_sort(int list[], int left, int right) // 리스트의 크기가 1이 될 때까지 계속  divided
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		merge(list, left, mid, right);			//list의 크기가 2 이상이면 merge 실행
	}
}
int main()
{
	int i;
	int n = MAX_SIZE;
	int list[8] = { 21, 10, 12, 20, 25, 13, 15, 22 };

	merge_sort(list, 0, n - 1);

	for (i = 0; i < n; i++) {
		printf("%d\n", list[i]);
	}
}

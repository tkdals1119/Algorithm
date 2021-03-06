// QuickSort

#include "cstdio"

void quicksort(int arr[], int left, int right);

void quicksort(int arr[], int left, int right)
{
	int L = left, R = right;
	int temp;
	int pivot = arr[(left + right) / 2];

	while (L <= R)
	{
		while (arr[L] < pivot) L++;
		while (arr[R] > pivot) R--;

		if (L <= R)
		{
			if (L != R)
			{
				temp = arr[R];
				arr[R] = arr[L];
				arr[L] = temp;
			}
			L++; R--;
		}		
	}

	printf("---------정렬중---------\n");
	printf("pivot:%d, // left:%d, // right:%d, // L:%d, // R:%d, // arr[L]:%d, // arr[R]:%d\n", pivot, left, right, L, R, arr[L], arr[R]);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	if (left < R) quicksort(arr, left, R);
	if (L < right) quicksort(arr, L, right);
}

int main()
{
	int arr[10] = { 2, 9, 4, 18, 5, 1, 7, 8, 15, 12 };
	printf("--정렬 전 순서--\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	quicksort(arr, 0, 9);

	printf("!!정렬완료!!\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
    return 0;
}


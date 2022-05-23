// n <=100,000 개로프
// k 개로프 w 물체 들어올리면 w/k만큼 무게 나눠짐
//로프가 들수 있는 최대중량
// 임의로 몇개 골라도 ok



// n 다음줄부터 최대중량


#include<stdio.h>
void quickSort(int arr[], int left, int right);
int partition(int arr[], int left, int right);
void swap(int arr[], int a, int b);
int main()
{
	int n, w, total;
	int rope[100000] = { 0, };
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &rope[i]);
	}

	quickSort(rope,0, n-1);
	total = rope[0] * n;
	for (int i = 1; i < n; i++)
	{
		w = rope[i] * (n - i);
		if (w > total)
		{
			total = w;
		}
	}

	printf("%d", total);

	return 0;
}

void swap(int arr[], int a, int b) {
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

int partition(int arr[], int left, int right) {
	int pivot = arr[left], low = left + 1, high = right, temp;
	while (low <= high) {
		while (low <= right && pivot >= arr[low]) low++;
		while (high >= (left + 1) && pivot <= arr[high]) high--;
		if (low <= high) swap(arr, low, high);
	}
	swap(arr, left, high);
	return high;
}

void quickSort(int arr[], int left, int right) {
	if (left <= right) {
		int pivot = partition(arr, left, right);
		quickSort(arr, left, pivot - 1);
		quickSort(arr, pivot + 1, right);
	}
}

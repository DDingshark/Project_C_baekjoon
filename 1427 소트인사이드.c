#include<stdio.h>
void quickSort(int arr[], int left, int right);
int partition(int arr[], int left, int right);
void swap(int arr[], int a, int b);
int main()
{
	int arr[1000000] = {0, };
	int n;
	int i = 0;
	scanf_s("%d", &n);
	do
	{
		arr[i] = n % 10;
		n /=10;
		i++;
	} while (n != 0);
	quickSort(arr, 0, i - 1);
	for (int j = i-1; j >=0; j--)
	{
		printf("%d", arr[j]);
	}

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
#include <stdio.h>

#define MAX 16

int bin_search(int *arr, int n, int key)
{
   int low, high, mid;

   low   = 0;
   high   = n - 1;
   mid   = low + (high - low) / 2;

   while (low <= high) {
      if (arr[mid] == key)
         return mid;
      if (arr[mid] > key)
         high = mid - 1;
      else
         low = mid + 1;
      mid = low + (high - low) / 2;
   }

   return -1;
}

 void accept_input(int *arr, int n)
 {
    int i;
 }

int main(void)
{
   int i, n, arr[MAX];

   printf("Enter the total number of elements: ");
   scanf("%d", &n);

   /* handle array overflow condition */
   if (n > MAX) {
      fprintf(stderr, "Number of elements must be less than %d\n", MAX);
      return 1;
   }

   printf("Enter the elements\n");

   for (i = 0; i < n; ++i)
      scanf("%d", &arr[i]);

   printf("Array has following elements\n");
   for (i = 0; i < n; ++i)
      printf("|%d| ", arr[i]);
      printf("\n");

   return 0;
}
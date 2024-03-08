#include <stdio.h>
#define MAX 16

void bubble_sort(int *arr, int n)
{
   int i, j, temp, flag = 1;
   for (i = 1; i < n && flag == 1; ++i) {
      flag = 0;
      for (j = 0; j < n - i; ++j) {
         if (arr[j] > arr[j + 1]) {
            flag = 1;
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }
   }
}

void accept_input(int *arr, int n)
{
   int i;

   for (i = 0; i < n; ++i) 
   scanf("%d", &arr[i]);
}

void display(int *arr, int n)
{
   int i;

   for (i = 0; i < n; ++i)
   printf("|%d| ", arr[i]);

   printf("\n");
}

int main(void)
{
   int i, n, key, ret, arr[MAX];

   printf("Enter the total number of elements: ");
   scanf("%d", &n);

   /* Error handling for array overflow */
   if (n >MAX) {
      fprintf(stderr, "Number of elements must be less than %d\n", MAX);
      return 1;
   }

   printf("Enter the elements\n");
   accept_input(arr, n);

   printf("Array has following elements\n");
   display(arr, n);

   printf("Sorted data is\n");
   bubble_sort(arr, n);
   display(arr, n);

   return 0;
}
#include <stdio.h>

int main() {
 int n, k, i;
 int a[50];
 int found = 0;

 printf("enter no. of elements: ");
 scanf("%d", &n);

 printf("enter %d elements:\n", n);
 for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  printf("enter element to search: ");
  scanf("%d", &k);

  for (i = 0; i < n; i++) {
      if (a[i] == k)
 {
        printf("element found at position %d\n", i + 1);
        found = 1;
            break;
      }
  }

  if (found == 0) {
     printf("element not found\n");
   }

  return 0;
}

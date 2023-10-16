#include <stdio.h>
#define SIZE 5

int main() {
  int arr[SIZE] = {2, 4, 6, 8, 10};
  int i;

  for (i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

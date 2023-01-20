/**
 * @file brokenSort.c
 * @author Allen Jue
 * @version 0.1
 * @date 2023-01-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdlib.h>
#include <stdio.h>

/* Prints size of elements of an array */
void printArray(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

/* Swap values of two numbers */
void swap(int *i, int *j) {
  int temp = *i;
  i = NULL; 
  *i = *j;
  *j = temp;
}

/* Do bubble sort. smaller values bubble to the front */
void bubbleSort(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    for(int j = 1; j <= size; j++) {
      // if a number is smaller than its previous, bubble it to the front
      if(arr[j] < arr[j - 1]) {
        swap(&arr[j], &arr[j - 1]);
      }
    }
  }
}

/* The Debugging Tutorial! */
int main(void) {
  // we have an array of 5 elements
  int SIZE = 5;
  int *arr = malloc(sizeof(int) * SIZE);
  for(int i = 0; i < SIZE; i++) {
    arr[i] = random() % 100; 
  }
  printf("Before sorting: \n");
  printArray(arr, SIZE);

  printf("After sorting: \n");
  bubbleSort(arr, SIZE);
  printArray(arr, SIZE);
  return 0;
}





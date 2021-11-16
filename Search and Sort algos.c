#include <stdio.h>
#include <math.h>

//sorting algorithms
void displayArr(int arr[], int size){
    printf("\nArray :");
    for(int i = 0; i < size; i++){
        printf("\n- %d", arr[i]);
    }
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[], int sizeArr){

    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < sizeArr-1; i++)  // we did sizeArr-1 because it is not necessary for i to get to the last element of the array
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < sizeArr; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
};
void bubbleSort(int arr[], int size){

    for(int i = 0; i < size - 1; ++i)
   {
      int swapped = 0;

      for(int j = 0; j < (size - i - 1); ++j)
         if(arr[j] > arr[j+1])
         {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            swapped = 1;
         }
      if(!swapped)
         break;
   }
};
void treeSort(){};

//Search algorithms

void linearSearch(){};
void binarySearch(){};

int jumpSearch(int arr[], int size, int searchFor){
    double step = sqrt(size);
    int start, i =0;
    for (i ; i < size ; i+=step) {
        if(arr[i] == searchFor){
            return i;
        }else if(arr[i] < searchFor){
            start = i;
        }else if(arr[i] > searchFor){
            break;
        }
    }
    int j = start;
    printf("\nThis is index of j: %d", j);
    for (j ; j < (start + step) ; j++) { //remplace size with start + step
            if(arr[j] == searchFor){
                printf("\nNumber found,%d, its index is %d\n", arr[j], j);
                return j;
            }
    }
    //in case number is not found
    printf("\nNumber not found");
    return -1;

};

void main(){
    int arr[] = {78,97,6,0,543,1,0,1,76};
    int size = sizeof(arr)/sizeof(arr[0]);
    int searchFor = 543;
    printf("Size of array %d\n", size);
    displayArr(arr, size);
    selectionSort(arr,size);
    //bubbleSort(arr, size);
    printf("\nSorted ");
    displayArr(arr, size);


    //Search algs

    printf("\nJump Search, index of number we look for : %d", jumpSearch(arr,size, searchFor));

}

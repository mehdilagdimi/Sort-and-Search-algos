#include <stdio.h>
#include <math.h>

//sorting algorithms
void displayArr(int arr[], int size){
    printf("\nSorted array :");
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
void bubbleSort(){

};
void treeSort(){};

//Search algorithms

void linearSearch(){};
void binarySearch(){};
void jumpSearch(){};

void main(){
    int arr[] = {78,97,6,0,543,1,0,1,76};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Size of array %d\n", size);
    selectionSort(arr,size);
    displayArr(arr, size);

}
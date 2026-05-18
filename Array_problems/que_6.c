/**
 * 6. Write a program in C to print all unique elements in an array.

 Test Data :
 
 Print all unique elements of an array:
 
 ------------------------------------------
 
 Input the number of elements to be stored in the array: 4
 
 Input 4 elements in the array :
 
 element - 0 : 3
 
 element - 1 : 2
 
 element - 2 : 2
 
 element - 3 : 5
 
 Expected Output :
 
 The unique elements found in the array are:
 
 3 5
 */

#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf(" Input the number of elements to be stored in the array: ");
    scanf("%d",&n);
    int* arr = (int*)malloc(n * sizeof(int));
    printf("\nInput %d elements in the array : \n",n);
    for(int i = 0; i < n; i++){
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i  = 0 ; i < n; i++){
        int isUnique = arr[i];
        if(isUnique != -1){
           int duplicateCount = 0;
           for(int j = i+1;j<n;j++){
               if(arr[j] == isUnique){
                arr[j] = -1;
                duplicateCount++;
               }
           }
           if(duplicateCount > 0){
            arr[i] = -1;
           }
        }
    }

    printf("\nThe unique elements found in the array are:\n");
    for(int i = 0; i < n; i++){
        if(arr[i] != -1){
            printf("%d ", arr[i]);
        }
    }
    free(arr);
    return 0;
}
/**
 * 5. Write a program in C to count the total number of duplicate elements in an array.

 Test Data :
 
 Input the number of elements to be stored in the array :3
 
 Input 3 elements in the array :
 
 element - 0 : 5
 
 element - 1 : 1
 
 element - 2 : 1
 
 Expected Output :
 
 Total number of duplicate elements found in the array is : 1
 */

#include<stdio.h>

int main(){
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nInput %d elements in the array : \n",n);
    for(int i = 0; i < n; i++){
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }
    int duplicate = -1;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != -1){
            for(int j = i + 1; j < n ; j++){
               if(arr[i] == arr[j]){
                  if(duplicate == arr[j]){
                      arr[j] = -1;
                      break;
                  }
                  if(duplicate != arr[j]){
                      duplicate = arr[i];
                      count++;
                      break;
                  }
               }
            }
        }
    }
    printf("\nTotal number of duplicate elements found in the array is : %d\n",count);
    return 0;
}


/***
 * 4. Write a program in C to copy the elements of one array into another array.
 
    Test Data :
 
    Input the number of elements to be stored in the array :3
 
    Input 3 elements in the array :
 
    element - 0 : 15 
 
    element - 1 : 10
 
    element - 2 : 12
 
    Expected Output :
 
    The elements stored in the first array are :
 
    15 10 12
 
    The elements copied into the second array are :
 
    15 10 12
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
    int arr2[n];
    for(int i = 0; i < n; i++){
        arr2[i] = arr[i];
    }
    printf("\nThe elements stored in the first array are : \n");
    for(int i = 0 ; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe elements copied into the second array are : \n");
    for(int i = 0; i < n ; i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
    return 0;
}
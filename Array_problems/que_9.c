/**
 * 9. Write a program in C to separate odd and even integers into separate arrays.

 Test Data :
 
 Input the number of elements to be stored in the array :5
 
 Input 5 elements in the array :
 
 element - 0 : 25
 
 element - 1 : 47
 
 element - 2 : 42
 
 element - 3 : 56
 
 element - 4 : 32
 
 Expected Output :
 
 The Even elements are :
 
 42 56 32
 
 The Odd elements are :
 
 25 47

 */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);

    int *arr= (int*)malloc(n*sizeof(int));
    int *even_arr = (int*)malloc(n*sizeof(int));
    int *odd_arr = (int*)malloc(n*sizeof(int));
    int even_count = 0, odd_count = 0;

    for(int i = 0; i<n;i++){
        printf("\nelement - %d : ",i);
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0){
            even_arr[even_count] = arr[i];
            even_count++;
        }else{
            odd_arr[odd_count] = arr[i];
            odd_count++;
        }
    }
    printf("\nThe Even elements are :\n");
    int i = 0;
    while(i < even_count ){
        printf("%d ",even_arr[i]);
        i++;
    }

    printf("\nThe Odd elements are :\n");
    i = 0;
    while(i < odd_count ){
        printf("%d ",odd_arr[i]);
        i++;
    }
    printf("\n");
    free(arr);
    free(even_arr);
    free(odd_arr);
    return 0;
}
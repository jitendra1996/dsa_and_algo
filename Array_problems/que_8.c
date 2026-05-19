/**
 * 8. Write a program in C to find the maximum and minimum elements in an array.

 Test Data :
 
 Input the number of elements to be stored in the array :3
 
 Input 3 elements in the array :
 
 element - 0 : 45
 
 element - 1 : 25
 
 element - 2 : 21
 
 Expected Output :
 
 Maximum element is : 45
 
 Minimum element is : 21
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    int min , max;
    for(int i = 0;i<n;i++){
        printf("\nelement - %d : ",i);
        scanf("%d",&arr[i]);
        if(i == 0){
            min = arr[i];
            max = arr[i];
        }else{
            if(arr[i]<min){
                min = arr[i];
            }
            if(arr[i]>max){
                max = arr[i];
            }
        }
    }
    printf("\nMaximum element is : %d",max);
    printf("\nMinimum element is : %d\n",min);
    free(arr);
    return 0;
}
/**
 * 7. Write a program in C to count the frequency of each element of an array.

 Test Data :
 
 Input the number of elements to be stored in the array :3
 
 Input 3 elements in the array :
 
 element - 0 : 25
 
 element - 1 : 12
 
 element - 2 : 43
 
 Expected Output :
 
 The frequency of all elements of an array :
 
 25 occurs 1 times
 
 12 occurs 1 times
 
 43 occurs 1 times
 */

 #include<stdio.h>
 #include<stdlib.h>

 int main(){
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        printf("\nelement - %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nThe frequency of all elements of an array :\n");
    int* frequency=(int*)malloc(n*sizeof(int));
    for(int i = 0 ; i < n; i++){
        int count = 0;
        int val = arr[i];
        for(int j = i+1;j<n;j++){
            if(arr[j] == val){
                count++;
            }
        }
        frequency[i] = count+1;
    }
    for(int i = 0; i < n; i++){
        printf("\n%d occurs %d times\n",arr[i],frequency[i]);
    }
    free(arr);
    free(frequency);
    return 0;
}
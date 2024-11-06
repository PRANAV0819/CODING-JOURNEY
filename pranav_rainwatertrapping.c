#include<stdio.h>
int main(){
    int n;
    printf("Welcome to rain water trapping calculator\n");
    printf("Enter the number of blocks in the rainwater harvesting system :");
    scanf("%d , &n");
    if (n<=0){
        printf("The number of must be greater than zero.\n");
        return 1;
    }

    int arr[n];
    int total =0;
    printf("Enter the heights of the blocks:\n");
    for(int i =0; i<n;i++);{
        scanf("%d", &arr[i]);
    }
    for (int j=0;j<n;j++){
        total +=arr[j];
        printf("Total water holding capacity of the rainwater harvesiting system is : %d cu. liters\n",total);

        return 0;
    }

    
}
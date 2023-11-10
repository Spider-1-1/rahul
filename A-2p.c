#include<stdio.h>

// ENTER AN ARAY FROM USER AND PRINT ARAAY IN REVERSE ORDER ????

int main(){
    int arr[5];
    int i;
    for(i=0;i<5;i++){
    printf("ENTER THE VALUES OF %d INDEX ",i);
    scanf("%d",&arr[i]);
    }
printf("REVERSED ORDER ARRAY\n");
    for(i=4;i>=0;i--){
    printf(" %d",arr[i]);
    
}
    getch();
    return 0;
    
}    

Output:

Enter the value for index 0: 10
Enter the value for index 1: 20
Enter the value for index 2: 30
Enter the value for index 3: 40
Enter the value for index 4: 50
Reversed order array: 50 40 30 20 10

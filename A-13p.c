#include<stdio.h>

// ENTER AN ARAY FROM USER AND COUNT THE DUPLICATE VALUES????

int main(){
    int arr[5];
    int i,j,count=0;
    for(i=0;i<5;i++){
    printf("ENTER THE VALUES OF %d INDEX ",i);
    scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
    if(arr[i]==arr[j]){
    count++;
    break;
}
}
}
printf(" TOTAL NUMBER OF DUPLICATE VALUES IN THIS ARRAY IS %d",count);
    getch();
    return 0;
    
}   

Output:

ENTER THE VALUES OF 0 INDEX 1
ENTER THE VALUES OF 1 INDEX 2
ENTER THE VALUES OF 2 INDEX 3
ENTER THE VALUES OF 3 INDEX 3
ENTER THE VALUES OF 4 INDEX 2
 TOTAL NUMBER OF DUPLICATE VALUES IN THIS ARRAY IS 2





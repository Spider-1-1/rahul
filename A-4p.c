#include<stdio.h>

// ENTER AN ARRAY FROM USER AND COPY THR ARRAY INTO ANOTHER ON REVERSE ORDEER????

int main(){
    int arr[5],arr2[5];
    int i;
    for(i=0;i<5;i++){
    printf("ENTER THE VALUES OF %d INDEX ",i);
    scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++){
    arr2[i]=arr[i];
}
printf("COPIED SECOND ARRAY  IN REVERSED ORDER IS\n");
for(i=4;i>=0;i--){
    printf(" %d",arr2[i]);
    
}
    getch();
    return 0;
    
}    

Output:

ENTER THE VALUES OF 0 INDEX 1
ENTER THE VALUES OF 1 INDEX 2
ENTER THE VALUES OF 2 INDEX 3
ENTER THE VALUES OF 3 INDEX 4
ENTER THE VALUES OF 4 INDEX 5
COPIED SECOND ARRAY  IN REVERSED ORDER IS
 5 4 3 2 1

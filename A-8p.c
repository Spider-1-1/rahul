#include<stdio.h>

// ENTER AN ARRAY FROM USER AND FIND MAXIMUM AND MINIMUM VALUE??
int main(){
    int arr[5];
    int i,max,min;
    printf("ENTER THE ARRAY");
    for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<5;i++){
               
          if(arr[i]>max){
           max=arr[i];
          }           
    }
    printf(" MAXIMUM  VALUE OF ARRAY IS %d\n",max);
    
    for(i=0;i<5;i++){
               
          if(arr[i]<min){
           min=arr[i];
          }           
    }
    printf(" Minimum VALUE OF ARRAY IS %d",min);
    
    
    getch();
    return 0;
    
    }

Output:

ENTER THE ARRAY1
-2
3
4
5
 MAXIMUM  VALUE OF ARRAY IS 5
 Minimum VALUE OF ARRAY IS -2










#include<stdio.h>
#include<conio.h>
#define n 3

//  IMPLEMENT THE OPERATIONS OF SIMPLE QUEUES IN INTEGER ARRAY(INSERT,DELETE,PEEK,ISEMPTY,ISFULL)?????

  int front,rare=-1;
  int q[n], item;
  
  int isfull(){
      
        if(q[rare]==q[n-1]){
        printf("QUEUE IS FULL ");
        }
        else{
             return 0;
        }
    }
        
    int isempty(){
        
        if(q[rare]==q[front]){
        printf("QUEUE IS empty");
        }
        else{
             return 0;
        }
    }
        
        
   void insert(int item){
        if(rare==n-1){
       isfull();
        }
       else if(rare==-1 && front==-1){
        rare=front=0;
        q[rare]=item;
        }
        else{
             rare++;
            q[rare]=item;
           }
    }
    int delet(){
        if(front==-1 &&rare==-1){
       isempty();
        }
        else if(front==rare){
        front=rare=-1;
}
        else{
        printf("%d",q[front]);
        front++;
        }
}  


 void peek(){
      
         if(front==-1 &&rare==-1){
         isempty();
        }
         else{
         printf("%d",q[front]);
              }
      }
      
      
 int main(){
     
    int ch;
    while(1){
    printf("\n ENTER THE CHOICE YOU WANT TO PERFORM \n");
    printf("\n 1 INSERT");
     printf("\n 2 DELETE");
      printf("\n 3 PEEK");
      printf("\n 4 EXIT");
     printf("\n ENTER YOUR CHOICE\n");
     scanf("%d",&ch);
    switch(ch){
    
    case 1:
          printf("\n ENTER THE ELEMENT");
          scanf("%d",&item);
          insert(item);
          break;
    
    case 2:
         delet();
             break;
            
     case 3:
          peek();
            break;
             
      case 4:
           exit(1);
           break;
           
       default:
                printf("\n INVALID CHOICE"); 
       }
       } 
     getch();
     return 0;
      
}


Output:

1. Insert
2. Delete
3. Peek
4. isempty
5. Isfull
6. Exit
Enter your choice
1
Enter the Number
15
1. Insert
2. Delete
3. Peek
4. isempty
5. Isfull
6. Exit
Enter your choice
2
Delete Number is 15
1. Insert
2. Delete
3. Peek
4. isempty
5. Isfull
6. Exit
Enter your choice
3
Queue is empty
1. Insert
2. Delete
3. Peek
4. isempty
5. Isfull
6. Exit
Enter your choice
4
Queue is empty
1. Insert
2. Delete
3. Peek
4. isempty
5. Isfull
6. Exit
Enter your choice
5
Queue is not full
1. Insert
2. Delete
3. Peek
4. isempty
5. Isfull
6. Exit
Enter your choice
6

WE have exited From the program















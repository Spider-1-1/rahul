#include<stdio.h>
#include<stdlib.h>

//  IMPLEMENT THE OPERATIONS OF SIMPLE QUEUES IN INTEGER ARRAY BY DYNAMICALLY(INSERT,DELETE,PEEK,ISEMPTY,ISFULL)?????

    struct node{
           char data[20];
           struct node *link;
           }*front,*rare;
  
      void insert(){
        
        struct node*temp =(struct node*)malloc(sizeof(struct node));
        printf("ENTER THE VALUE TO BE INSERETED\n");
        scanf("%s",temp->data);
         temp->link='\0';
        if(rare=='\0'){
        rare=front=temp;
        }
        else{
             rare->link=temp;
            rare=temp;
            }
    }
  
    void delete(){

    struct node *temp;
    temp = front;
    if (front=='\0')
    {
        printf("queue is empty \n");
        front = rare = '\0';
    }
    else
    {    
        printf("deleted element is %s\n",front->data);
        front = front->link;
        free(temp);
    }
}
  
      
      
 int main(){
     
   int choice, value;
 
    while(1)
    {
        printf("enter the choice \n");
        printf("1 : insert\n");
        printf("2 : delete\n");
        printf("3 : exit\n");
        scanf("%d", &choice);
        switch (choice)    
        {
    
        case 1:    
            insert();
            break;
        case 2: 
            delete();
            break;
        case 3:
             exit(1);
            break;
        default: 
            printf("wrong choice\n");
            break;
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
Enter the string
Rahul
1. Insert
2. Delete
3. Peek
4. isempty
5. Isfull
6. Exit
Enter your choice
2
Delete string is Rahul
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


















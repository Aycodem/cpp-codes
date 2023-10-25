#include <stdio.h> 
#include <string.h>

struct  Task
{
char name[100];
char description[200];
int completed;
};


struct Task tasks[100];
int taskcount= 0 ;



void addtask(){
    printf("Enter the name of the task you want to add: \n");
    scanf("%s", &tasks[taskcount].name);



    printf("Enter task description: \n");
    fgets(tasks[taskcount].description, sizeof(tasks[taskcount].description), stdin);
    tasks[taskcount].description[strlen(tasks[taskcount].description) -1 ] ='\0';
    tasks[taskcount].completed = 0 ;
    taskcount++;
    printf("Task added! \n");


}

void removeTask(){
    int index;
    printf("Enter task index to remove: ");
    scanf("%d", &index);
    if (index >= 0 && index < taskcount ){

        for (int i = index ; i < taskcount - 1 ; i++ ){
            tasks[i]=tasks[i + 1 ]; 

        }
        taskcount--; 
        printf("Task removed \n ");

    }else {
        printf("Invalid index \n ");
    }


}


void displaytasks(){
    printf("Task: \n ");
    for (int i = 0 ; i < taskcount ; i++ ){

        printf("id |taskname                | description               | Status\n");
     printf(" %d.  |[ %s ]                     |%s                         |(%s)\n", i + 1 , tasks[i ].name, tasks[i].description,tasks[i].completed ? "Completed": "Incomplete");
          
    }


}

int main(){

    int choice; 
    do {
        printf("Menu: \n");
        printf("1. Add task \n");
        printf("2. Remove task \n");
        printf("3. Display task \n");
        printf("4. Exit \n");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            addtask();
            break;
        case 2: 
            removeTask();
            break;
        case 3:
            displaytasks();
            break;
        case 4:
            printf("Existing... \n ");
            break;
        default:
            printf("Invalid choice. \n ");
            break;
        }


    }while (choice != 4 );
    return 0 ;



}
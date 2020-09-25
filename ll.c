#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100

struct node
{
    int value;
    int *link;
};

void display(struct node[MAX]);
int getChoice(int, int);
int main()
{

    // declaring and assigning everything to ZERO
    struct node linkedList[MAX];
    for(int i = 0; i < MAX; i++)
    {
        linkedList[i].value = 0;
        linkedList[i].link = &linkedList[i+1].value;
    }
    // temp is the value stored in a node, nodeNumber is the respective index in the array
    int temp, nodeNumber;

    int choice; // menu choice

    while(1)
    {
        printf("\n\n\n");
        printf("1 -> Add Node\n");
        printf("2 -> Display Linked List\n");
        printf("3 -> Close Program\n");
        choice = getChoice(1, 3);

        switch(choice)
        {
            case 1:
                printf("Enter Node number: ");
                scanf("%d", &nodeNumber);
                printf("Enter value of node number %d: ", nodeNumber);
                scanf("%d", &temp);
                linkedList[nodeNumber].value = temp;
                linkedList[nodeNumber].link = &linkedList[nodeNumber+1].value;
                break;
            case 2:
                display(linkedList);
                break;
            case 3:
                return 0;
        }
    }
    return 0;
}


int getChoice(int min, int max)
{   
    // to get a valid value between min and max
    int choice;
    printf("Enter choice: ");
    scanf("%d", &choice);
    while(choice > max || choice < min)
    {
        printf("Invalid choice !\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
    }
    return choice;
}

void display(struct node linkedList[MAX])
{
    printf("\n");
    for(int i = 0; i < MAX; i++)
    {
        // printf("It just came inside the loop\n");
        printf("%d, %u\t%u\n", linkedList[i].value, linkedList[i].link);
        //print &linkedList[i].value to check at the end
    }
}


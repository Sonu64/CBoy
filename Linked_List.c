#include <stdio.h>
#include <stdlib.h>

struct NODE {
    int value;
    struct NODE *link;
};

struct NODE *HEAD = NULL;

void appendAtEnd(int);
void insertAtBeginning(int);
void insertAtPosition(int, int);
void display();

int main() {

    int prompt, data;

    do {
        printf("\n");
        printf("Enter 1 to enter data at the end\n");
        printf("Enter 2 to enter data at the beginning:\n");
        printf("Enter 3 to enter data after a position:\n");
        printf("Enter 0 to quit entering and display list\n");
        printf("Your choice: ");
        scanf("%d", &prompt);
        if(prompt == 1) {
            printf("Enter the data: ");
            scanf("%d", &data);
            appendAtEnd(data);
        }
        else if(prompt == 2) {
            printf("Enter the data: ");
            scanf("%d", &data);
            insertAtBeginning(data);
        }
        else if(prompt == 3) {
            printf("Enter the position after which you want to insert: ");
            int pos;
            scanf("%d", &pos);
            printf("Enter the data: ");
            scanf("%d", &data);
            insertAtPosition(pos, data);
        }
    } while(prompt != 0);

    display();

    return 0;
}

void appendAtEnd(int data) {
    struct NODE *temp, *curr;
    temp = (struct NODE*)malloc(sizeof(struct NODE));
    temp->value = data;
    temp->link = NULL;

    if(HEAD == NULL) {
        HEAD = temp;
    }

    else {
        curr = HEAD;
        while(curr->link != NULL) {
            curr = curr->link;
        }
        curr->link = temp;
    }
}

void insertAtBeginning(int data) {
    struct NODE *temp;
    temp = (struct NODE*) malloc(sizeof(struct NODE));
    temp->value = data;
    temp->link = HEAD;
    HEAD = temp;
}

void insertAtPosition(int pos, int data) {
    struct NODE *temp, *curr = HEAD;

    while(pos > 1 && curr != NULL) {
        curr = curr->link;
        pos--;
    }
    if(curr == NULL) {
        printf("Sorry, Position is outside list !\n");
        return ;
    }

    temp = (struct NODE*)malloc(sizeof(struct NODE));
    temp->value = data;
    temp->link = curr->link;
    curr->link = temp;

}

void display() {
    int count = 0;
    struct NODE *curr = HEAD;
    printf("\n\n");
    while(curr != NULL) {
        printf("Data-%d => %d\n", (++count), curr->value);
        curr = curr->link;
    }
}

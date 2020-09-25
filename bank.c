#include <stdio.h>
#include <string.h>

struct account
{
    char accNum[50];
    char name[100];
    float balance;
};

void below100Customers(struct account*);
void process(struct account*, float, int);
void displayContent(struct account*);

int main()
{
    struct account bank[5] = {
        {"B00009012182383", "Sourakanti Mandal", 101.234},
        {"B00001823331283", "Eshita Rakshit", 40524.79},
        {"B00001811001283", "Alakh Pandey", 1000000.234},
        {"B00001111111111", "Sachin Rana", 1000000.111},
        {"B00001823909999", "Rick Segal", 7.234},
    };
    float amount;
    char accNum[50];
    int code;


// display the name of customers, with balance < 100
    for(int i = 0; i < 5; i++)
    {
        below100Customers(&bank[i]);
    }


// withdraw or deposit
    printf("Enter account number: ");
    gets(accNum);

    printf("Enter 1 to deposit or 0 to withdraw: ");
    scanf("%d", &code);

    if(code == 1)
        printf("Enter Amount to deposit: ");
    else
        printf("Enter Amount to withdraw: ");

    scanf("%f", &amount); 
    

    for(int i = 0; i < 5; i++)
    {
        if(strcmp(bank[i].accNum, accNum) == 0)
        {
            process(&bank[i], amount, code);
            break;
        }
    }

    // displaying the bank content at
    printf("\n\n\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Customer Number %d\n", (i+1));
        displayContent(&bank[i]);
        printf("\n\n");
    }
    return 0;
}


void below100Customers(struct account* user)
{
    // if balance is below 100, I can't withdraw from it
    if(user->balance < 100)
    {
        printf("%s with Account Number %s\n", user->name, user->accNum);
    }
}

void process(struct account *user, float amount, int code)
{
   

   float tempBalance = user->balance;
   if(tempBalance-amount<100 && code == 0)
   {
       printf("Balance is going below 100, can't withdraw");
       return ;
   }
   else if(code == 1)
   {
       user->balance = user->balance + amount;
   }
   else
   {
       user->balance = user->balance - amount;
   }
        
}

void displayContent(struct account *user)
{
    printf("Account Number: %s\n", user->accNum);
    printf("Username: %s\n", user->name);
    printf("Bank Balance: %f\n", user->balance);
}



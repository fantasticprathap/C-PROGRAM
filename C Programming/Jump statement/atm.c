//
//
//
#include<stdio.h>
#include<conio.h>
int main()
{
    char name;
    printf("Enter the name=");
    scanf("%c",&name);
     if (name=='p')
     {
         int password;
         printf("Enter the password=");
         scanf("%d",&password);
          if (password==123)
          {
            int OTP;
            printf("Enter the OTP=");
            scanf("%d",&OTP);
             if (OTP==111)
             {
                int amount,balance,deposit,withdraw,total;
                amount=10000;
                char op;
                printf("Enter the operation=");
                scanf(" %c",&op);
                switch (op)
                {
                    case 'b':
                 printf("%d",amount);
                 break;
                    case 'd':
                 printf("Enter the deposit amount=");
                 scanf("%d",&deposit);
                 total=amount+deposit;
                 printf("The total amount is =%d",total);
                 break;
                    case 'w':
                 printf("Enter the withdraw amount=");
                 scanf("%d",&withdraw);
                 balance=amount-withdraw;
                 printf("%d",balance);
                 break;
                }
             }
           else
           {
            printf("Two step verification failed");
           }  
          }
          else
          {
            printf("Password wrong");
          }  
     }
     else
     {
        printf("User name wrong");
     }
 getch();    
}
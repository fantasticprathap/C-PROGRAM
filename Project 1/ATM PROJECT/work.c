#include<stdio.h>
#include<windows.h>
#include "step4.h"
int balance=25000;
int total;
int display()
{
	int pin,cpin,pinn[4],i=0,operation,a,b,d,e;
	COORD c;
	c.X=53;
	c.Y=27; 
	p:
	printf("\n                                                   ENTER YOUR PIN       \n");
	printf("\n                                                    [ ][ ][ ][ ]         \n");
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
	for(i=0;i<4;i++)
	{
	scanf("%d",&pinn[i]); 	
	c.X=c.X+3;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);	
    }
	printf("\n                                                  REENTER YOUR PIN       \n");
	scanf("%d",&pin);   
	pinc=pin;                               //global declare in pinc
	cpin=pin;
	system("cls");
    a=cpin%10; 
	cpin/=10;
	b=cpin%10;
	cpin/=10;
	d=cpin%10;
	cpin/=10;
	e=cpin;  
	if((pinn[0]==e)&&(pinn[1]==d)&&(pinn[2]==b)&&(pinn[3]==a))
	{
	if((pin>=1000)&&(pin<=9999))
	{
	
		printf("\n\n  1.DEPOSIT                                                                                 2.WITHDRAW\n\n");
				printf("  \n\n  3.BALANCE ENQUIRY                                                                         4.PIN CHANGE\n\n");
						printf("  \n\n  5.MOBILE REGISTERATION                                                                    6.CANCEL\n\n");
						scanf("%d",&operation);
							system("cls");
	}
	else
	{
		if(i<2)
		{
		printf(" \n                                                   WRONG PIN NUMBER                                   \nPLEASE ENTER CORRECT PIN NUMBER");
		i++;
		goto p;
	    }
	    printf("\n                                                   MULTIPLE TIME PIN WRONG\n");
	}
}
 else
 {
 	printf("\n                                           !!! ENTER SAME PIN NUMBER !!!\n");
 	c.X=53;
	c.Y=5;
 	goto p;
 }
switch(operation)
	{
		case 1:
			   deposit();
			   date();
			   break;
		case 2:
		       withdraw();
		       date();
			   break;	
		case 3:
		       bal_enquiry();
		       date();
			   break;
		case 4:	   
			   pin_change();
			   date();
			   break;
		case 5:
		       mobile();
		       date();
			   break;
		case 6:
		       printf("\n                            THANK YOU FOR USING OUR ATM\n");
		default:
			   printf("\n                            WRONG NUMBER ENTERED\n      ");			   	   	   	      
	}
}
int deposit()                                                                    //deposit start
{
	int press;
	printf("\nONLY 100 AND 500 RUPEES ARE DEPOSIT\n");
	printf("\nARE YOU CONTINUE PRESS 1 OR RETURN PRESS 0\n");
	scanf("%d",&press);
    system("cls");
	if(press==1)
	{
	 int deposit_amount,deposit;	
	 printf("\nPLEASE GIVE YOUR MONEY:\n");
	 scanf("%d",&deposit_amount);
	 deposit=deposit_amount;
	 if(deposit_amount<50000)                          
	 {
	 	if((deposit_amount%100==0)||(deposit_amount%500==0))
	 	{
	     printf("\nYOUR DEPOSITED AMOUNT IS :%d\n",deposit_amount);
	     total=balance+deposit_amount;
	     printf("\nADD MORE PRESS 1 OR CONTINUE PRESS 2 OR SKIP PRESS 3\n");
	     int press1;
	     scanf("%d",&press1);
	     system("cls");
	     if(press1==1)
	     {
	       printf("\nPLEASE GIVE YOUR MONEY\n");
	       scanf("%d",&deposit_amount);
	       system("cls");
	       if((deposit_amount%100==0)||(deposit_amount%500==0))
	       {
		   total=total+deposit_amount;
		   if(total<(balance+50000))
		   {
		   int i,sam=0;
		    sam=deposit+deposit_amount;
		    printf("\nYOUR TOTAL DEPOSITED AMOUNT IS :%d\n",sam);
		   		                for (i=0;sam>=500;i++)
		   		                {
		   		                	sam=sam-500;
								   }
								   printf("\n500 RUPEES NOTES ARE:%d\n",i);
								   sam=sam/100;
								   printf("\n100 RUPEES NOTES ARE:%d\n",sam);	
		   printf("\nYOUR TOTAL AMOUNT IS :%d\n",total);
		   printf("\nTHANKS FOR USING OUR ATM\n");
	       }  
		   else if(total>(balance+50000))
		   {
		   	  printf("\nPLEASE TAKE YOUR AMOUNT :%d\n",deposit_amount);
		   	  printf("\nYOUR TOTAL AMOUNT IS :%d\n",total-deposit_amount);
		   	  printf("\nYOUR DAILY DEPOSIT AMOUNT IS MINIMUM 50000 RUPEES\n");
	 	      printf("\nPLEASE VISIT BANK\n");
		   } 
		}
		else
		{
			printf("\nYOU ONLY DEPOSIT MULTIPLE OF 100 AND 500 RUREES\n"); 
		}
		 }
		 else if (press1==2)
		 {
		 	int i,sam1;
		 	sam1=deposit_amount;
		   		                for (i=0;sam1>=500;i++)
		   		                {
		   		                	sam1=sam1-500;
								   }
								   printf("\n500 RUPEES NOTES ARE:%d",i);
								   sam1=sam1/100;
								   printf("\n100 RUPEES NOTES ARE:%d",sam1);
		    printf("\nYOUR TOTAL AMOUNT IS :%d\n",total);
		 }
		 else
		 {
		 	return main();
		 }
	}
	else
	{
		printf("\nYOU ONLY DEPOSIT MULTIPLE OF 100 AND 500 RUREES\n");
	}
	 }
	 else if (deposit_amount>50000)
	 {
	 	printf("\nYOUR DAILY DEPOSIT AMOUNT IS MINIMUM 50000 RUPEES\n");
	 	printf("\nPLEASE VISIT BANK\n");
	 }
	 else
	 {
	    printf("\nYOU ONLY DEPOSIT MULTIPLE OF 100 AND 500 RUREES\n");
	 }
	}
	else if(press==0)
	{
		return main();
	}
	else
	{
	 printf("\n                                                WRONGLY NUMBER ENTERED");
	}	
}
int withdraw()
{
	int press,press2;
	w:
	printf("\nONLY 100 AND 500 RUPEES ARE WITHDRAW\n");
	printf("\nARE YOU CONTINUE PRESS 1 OR RETURN PRESS 0\n");
	scanf("%d",&press);
    system("cls");
	if(press==1)
	{
		int withdraw_amount,press1,withdraw;
		printf("\n                                           [1]    [2]    [3]                             PRESSS->>>  1-> CREDIT\n");
		printf("\n                                           [4]    [5]    [6]                             PRESSS->>>  2-> CURRENT\n");
		printf("\n                                           [7]    [8]    [9]                             PRESSS->>>  3-> SAVINGS\n");
		printf("\n                                           [*]    [0]    [#]                             PRESSS->>>  4-> CANCEL\n");
		scanf("%d",&press1);
		system("cls");
		if((press1==1)||(press1==2)||(press1==3))
		{
		   printf("\nENTER YOUR WITHDRAW AMOUNT:\n");
		   scanf("%d",&withdraw_amount);
		   withdraw=withdraw_amount;
		   system("cls");
		   if(withdraw_amount<20000)
		   {
		   	if((withdraw_amount%100==0)||(withdraw_amount%500==0))
		   	{
		   		if(withdraw_amount<balance)
		   		{
		   		    total=balance-withdraw_amount;
					printf("\nYOUR BALANCE IS :%d\n",total);
					printf("\nWITHDRAW AGAIN PRESS->>1\n \nCONTINUE PRESSS->>2\n");
					scanf("%d",&press2);
					system("cls");
					if(press2==1)
					{
						printf("\nENTER YOUR WITHDRAW AMOUNT:\n");
		                scanf("%d",&withdraw_amount);
		                system("cls");
		                if(withdraw_amount<20000)
		                {
		                 if((withdraw_amount%100==0)||(withdraw_amount%500==0))
						 {
						 	if(withdraw_amount<balance)
						 	{
					            int sample;
		   		                total=total-withdraw_amount;
		   		                sample=withdraw_amount+withdraw;
		   		                 printf("\n                                                                    PLEASE TAKE YOUR WITHDRAW AMOUNT:%d\n",sample);
		   		                int i;
		   		                for (i=0;sample>=500;i++)
		   		                {
		   		                	sample=sample-500;
								   }
								   sample=sample/100;
								   printf("\n                                  500 RUPEES NOTES ARE:%d\n",i);
								   printf("\n                                  100 RUPEES NOTES ARE:%d\n",sample);
					               printf("\n                                                                  YOUR TOTAL BALANCE IS :%d\n",total);
							 }
							 else
							 {
							 	printf("\nINSUFFICIENT BALANCE\n");
							 	return main();
							 }
							   }  	
							   else
							   {
							   	printf("\nYOU ONLY WITHDRAW MULTIPLE OF 100 AND 500 RUREES\n");
							    goto w;
							   }
						}
						else
						{
							printf("\nYOUR DAILY WITHDRAW MAXIMUM LIMIT 20000\n");
						    goto w;
						}
					      	
					}
					else if(press2==2)
					{
					                printf("\nPLEASE TAKE YOUR WITHDRAW AMOUNT:%d\n",withdraw_amount);	
						            int i,sample1;
						            sample1=withdraw_amount;
		   		                    for (i=0;sample1>=500;i++)
		   		                   {
		   		                	sample1=sample1-500;
								   }
								   sample1=sample1/100;
								   printf("\n                                              500 RUPEES NOTES ARE:%d\n",i);
								   printf("\n                                              100 RUPEES NOTES ARE:%d\n",sample1);
								   printf("\n                                                                           YOUR WITHDRAW AMOUNT IS:%d\n",withdraw_amount);
						           printf("\n                                                                           YOUR BALANCE IS :%d\n",total);  //notes add
					}
					else
					{
						printf("\nYOUR BALANCE IS :%d\n",total);
						return main();
					}   	
				   }
				   else
				   {
				   	printf("\nINSUFFICIENT BALANCE\n");
				   	goto w;
				   }
			}
			else
			{
				printf("\nYOU ONLY WITHDRAW MULTIPLE OF 100 AND 500 RUREES\n");
				goto w;
			}
		   }
		   else
		   {
		   	printf("\nYOUR DAILY WITHDRAW MAXIMUM LIMIT 20000\n");
			}	
		}
		else if(press1==4)
		{
			return main();
		}
		else
		{
			printf("\n                                                WRONGLY NUMBER ENTERED\n");
		}
	}
	else if(press==0)
	{
		return main();
	}
	else
	{
		printf("\n                                                WRONGLY NUMBER ENTERED");
	}
}
int bal_enquiry()
{
	int pressb;
	printf("\n                                                 RECEIPT NOT PRINTED\n");
	printf("\n                                                                                          PRESS->>> 1.CONTINUE\n");
	printf("\n                                                                                          PRESS->>> 2.CANCEL\n");
	scanf("%d",&pressb);
	system("cls");
	if(pressb==1)
	{
		printf("\n                                           [1]    [2]    [3]                             PRESSS->>>  1-> CREDIT\n");
		printf("\n                                           [4]    [5]    [6]                             PRESSS->>>  2-> CURRENT\n");
		printf("\n                                           [7]    [8]    [9]                             PRESSS->>>  3-> SAVINGS\n");
		printf("\n                                           [*]    [0]    [#]                             PRESSS->>>  4-> CANCEL\n");
		int pressb1;
		scanf("%d",&pressb1);
		system("cls");
		if((pressb1==1)||(pressb1==2)||(pressb1==3))
		{
	printf("\n                                                                                YOUR TOTAL BALANCE IS:%d",balance);
	printf("\n                                                                                THANKS FOR USING OUR ATM\n");
		}
		else if (pressb1==4)
		{
		    return main();	
		}
		else
		{
	printf("\n                                            WRONG NUMBER ENTERED\n");
		}
	}
	else if(pressb==2)
	{
	    return main();	
	}
	else 
	{
	printf("\n                                            WRONG NUMBER ENTERED\n");
	}
}
int pin_change()
{
	int pressp;
	p:
	printf("\n                                            ARE YOU SURE YOU WANT TO CHANGE PIN NUMBER\n ");
	printf("\n                                                                                      PRESS->>>1.CONTINUE");
	printf("\n                                                                                      PRESS->>>2.CANCEL");
	scanf("%d",&pressp);
	system("cls");
	if(pressp==1)
	{
		int pinp;
	printf("\n                                            ENTER YOUR OLD PIN NUMBER\n");
		scanf("%d",&pinp);
		system("cls");
		if (pinc==pinp)
		{
	printf("\n                                            OTP SEND YOUR REGISTER MOBILE NUMBER\n");
			int otp,npin;
			o:
	printf("\n                                            ENTER YOUR 6 DIGIT OTP NUMBER\n");
			scanf("%d",&otp);
			system("cls");
			if ((otp>99999)&&(otp<1000000))
			{
	printf("\n                                            YOUR ENTER OTP IS VERIFIED\n");
			 c:
    printf("\n                                            ENTER YOUR NEW PIN NUMBER\n");
			 scanf("%d",&npin);
			 system("cls");
			 if ((npin>999)&&(npin<10000))
			 {
	printf("\n                                            YOUR NEW PIN CHANGED SUCCESSFULLY\n");
	printf("\n                                            THANKS FOR USING OUR ATM\n");
				 }
				 else
				 {
	printf("\n                                            ENTER YOUR CORRECT DIGIT PIN NUMBER\n");
				 	goto c;
					 }	
			}
			else
			{
	printf("\n                                            YOUR ENTERED OTP IS INCORRECT\n");
				goto o;
				}	
		}
		else
		{
	printf("\n                                            ENTER YOUR CORRECT OLD PIN NUMBER\n");
			goto p;
		}
	}
	else if(pressp==2)
	{
		return main();
	}
	else
	{
	printf("\n                                             WRONG NUMBER ENTERED\n");
	}
}
int mobile()
{
	long long int mob;
	printf("\n                                             ENTER YOUR MOBILE NUMBER\n");
	scanf("%lli",&mob);
	if ((mob>6000000000)&&(mob<10000000000))
	{
	printf("\n                                             MOBILE NUMBER VERIFIED\n");
	}
	else
	{
	printf("\n                                             MOBILE NUMBER IS INVALID\n");
	}
}

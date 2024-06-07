//Online ticket booking centre for top five cities in India
#include<stdio.h>

int main()
{
    int a, d, cf, p, c;
    printf("Welcome to Online ticket booking.\n");
    printf("Please Enter Your Location of arrival and departure \n 1. For Delhi\n 2. For Kolkata\n 3. For Mumbai\n 4. For Hyderabad \n 5.For Bengal\n");
    scanf("%d %d", &a, &d);
    printf("Enter\n1 for general \n2 for AC\n3 for sleeper\n");
    scanf("%d", &cf);
    switch(cf)
    {
        case 1:
            switch(a)
            {
                case 1: printf("Rs 700\n"); break;
                case 2: printf("Rs 600\n"); break;
                case 3: printf("Rs 500\n"); break;
                case 4: printf("Rs 400\n"); break;
                case 5: printf("Rs 300\n"); break;
                default: printf("Please Check your Destination entered and enter again: "); goto mistk;
            }
            break;
            
        case 2:
            switch(a)
            {
                case 1: printf("Rs 1700\n"); break;
                case 2: printf("Rs 1600\n"); break;
                case 3: printf("Rs 1500\n"); break;
                case 4: printf("Rs 1400\n"); break;
                case 5: printf("Rs 1300\n"); break;
                default: printf("Please Check your Destination entered and enter again: "); goto mistk;
            }
            break;
        
        case 3:
            switch(a)
            {
                case 1: printf("Rs 1200\n"); break;
                case 2: printf("Rs 1100\n"); break;
                case 3: printf("Rs 1000\n"); break;
                case 4: printf("Rs 900\n"); break;
                case 5: printf("Rs 800\n"); break;
                default: printf("Please Check your Destination entered and enter again: "); goto mistk;
            }
            break;
        default: printf("Please check with your input"); goto mistk;
    }

mistk:
    printf("\nChecking for available trains....\n");
    printf("\n\n Confirm your ticket...Enter 1 to confirm\n");
    scanf("%d", &c);
    if(c==1) 
    {
        printf("Payment Methods \n1.For Paytm\n2. For Any other UPI\n");
        scanf("%d", &p);
        printf("Wait for your transaction to complete\n\n");
        printf("Your ticket has been booked. \nTrain arrives at 9Am and departures at 11Pm for Delhi\nTrain arrives at 10am and departs at 11:30");
    }
    return 0;
}

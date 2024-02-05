#include <stdio.h>
#include<curses.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, const char * argv[]) {
    char cust_name[20],item_name[20],city[20];
    int cust_id,month,ch,amount=0,r1=0,r2=0;
    long cust_ph;
    system("clear");
    puts("Enter the customer details : ");
    printf("Customer Name : ");
    scanf("%s",cust_name);
    printf("Enter customer id:");
    scanf("%d",&cust_id);
    printf("Customer Phone Number : " );
    scanf("%ld",&cust_ph);
    printf("Customer City : ");
    scanf("%s",city);
    system("clear");
    printf("\n============= Menu ===============\n");
    puts("1.sofa");
    puts("2.loveseat");
    puts("3.4 post bed");
    puts("4.dresser");
    puts("5.kitchen table");
    puts("6.chairs");
    puts("7.desk");
    puts("8.bookcase");
    puts("9.armoire");
    puts("10.outdoor furniture");
    printf("\n===================================\n");
    printf("Select the required furniture : ");
    scanf("%d",&ch);
    printf("For how many months : ");
    scanf("%d",&month);
    if(month<1)
    {
        printf("invaild months");
        exit(0);
    }
    switch(ch)
    {
        case 1: strcpy(item_name,"sofa");
            r1=20;
            r2=12;
            if(month>1)
             {
                amount=20+(12*(month-1));
                 }
                 else
                    amount=20;
            break;
        case 2: strcpy(item_name,"Loveseat");
            r1=15;
            r2=10;
            if(month>1)
             {
                amount=15+(10*(month-1));
                 }
                 else
                 amount=15;
                 break;
        case 3: strcpy(item_name,"4 Post Bed");
            r1=25;r2=8;
            if(month>1)
             {
                amount=25+(8*(month-1));
                 }
                 else
                 amount=25;
                 break;
        case 4:  strcpy(item_name,"Dresser");
             r1=10;r2=5;
             if(month>1)
             {
            amount=10+(5*(month-1));
                 }
                 else
                 amount=10;
                 break;
        case 5: strcpy(item_name,"Kitchen Table");
            r1=25;r2=10;
            if(month>1)
             {
                amount=25+(10*(month-1));
                 }
             else
             amount=25;
             break;
        case 6: strcpy(item_name,"Chairs");
            r1=20; r2=15;
            if(month>1)
            {
                amount=20+(15*(month-1));
                 }
            else
                amount=20;
            break;
        case 7: strcpy(item_name,"Desk");
            r1=30;r2=20;
            if(month>1)
            {
                amount=30+(20*(month-1));
               }
            else
                amount=30;
            break;
        case 8: strcpy(item_name,"BookCASE");
            r1=25;r2=15;
            if(month>1)
            {
                amount=25+(15*(month-1));
               }
            else
                amount=25;
            break;
        case 9: strcpy(item_name,"Armoire");
            r1=35;r2=25;
            if(month>1)
            {
                amount=35+(25*(month-1));
               }
            else
                amount=35;
            break;
        case 10: strcpy(item_name,"OutDoor Furniture");
            r1=70;r2=50;
            if(month>1)
            {
                amount=70+(50*(month-1));
               }
            else
                amount=70;
            break;
            default : printf("invaild selection");
    }
    system("clear");
    printf("\n==================BILL================\n");
    printf("\n\tCustomer Name : %s",cust_name);
    printf("\n\tCustomer ID   : %d",cust_id);
    printf("\n\tCustomer Phone: %ld",cust_ph);
    printf("\n\tCustomer City : %s",city);
    printf("\n\tItem rented   : %s",item_name);
    printf("\n\tMonths rented : %d",month);
    printf("\n\tFirst Month rent : Rs. %d/-",r1);
    printf("\n\tRent from second month : Rs. %d/-",r2);
    printf("\n\tAmount due(Rs)  :Rs. %d/-",amount);
    printf("\n=============Thank you===============\n");
    return 0;
}
#include<stdio.h>

int main()
{
    int age, student;

    float ticket, discount, final_ticket;

    printf("Enter age\n");
    scanf("%d",&age);

    printf("Student Option\n");

    printf("1 = Yes\n");
    printf("0 = No\n");

    scanf("%d",&student);

    if(age<5)
    {
        ticket = 0;

        printf("Free Ticket\n");
    }
    else if(age>=5 && age<=18)
    {
        ticket = 100;
    }
    else
    {
        ticket = 250;
    }

    if(student==1)
    {
        discount = 50;
    }
    else
    {
        discount = 0;
    }

    final_ticket = ticket - discount;

    printf("Ticket Price = %.2f\n",ticket);

    printf("Discount = %.2f\n",discount);

    printf("Final Ticket Price = %.2f\n",final_ticket);

    return 0;
}

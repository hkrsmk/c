#include <stdio.h>
#include <string.h>
#include <math.h>

double cash_received,total_cost,cost_per_pack,change_returned();

int main(void)

{
    char customer_choice[]="",pdt_code;
    int qty,cashier_input=0,count;

do{
        fflush(stdin);
        printf("Enter product code.");
        pdt_code=getchar();
    printf("Product code is %c.",pdt_code);

    switch (pdt_code)
    {
    case '1':
        strcpy(customer_choice,"Jack's blend 3 in 1"), cost_per_pack=9.9;
        break;

            case '2':
        strcpy(customer_choice,"Brazilian"), cost_per_pack=9.9;
        break;
            case '3':
        strcpy(customer_choice,"columbian"), cost_per_pack=9.9;
        break;
            case '4':
        strcpy(customer_choice,"kenyan"), cost_per_pack=9.9;
        break;
            case '5':
        strcpy(customer_choice,"viettt"), cost_per_pack=9.9;
        break;
            case ' ':
        printf("Total amount to be paid = %f",total_cost);
        break;

        default:
        printf("Invalid input. Try again.");
    }


    printf("\nEnter quantity purchased.");
    scanf("%d",&qty);

    for(count=0;count<abs(qty);count++)
    {
        total_cost += cost_per_pack*qty;
    }


     printf("\nThe quantity you just entered is %d and the product name is %s. Total payment due currently is %f.",qty,customer_choice,total_cost);





    printf("\n\nIs that all? Input 1 to finish and 0 to add more items.\n\nTo undo the previous selection,");
printf("add a new item: enter the product code and the NEGATIVE version of the quantity to remove it from the total amount. ");
    scanf("%d",&cashier_input);


} while (cashier_input==0);


    printf("\nThe change is %lf.",change_returned());
    return 0;
}

double change_returned (void){
printf("\nEnter cash received from customer.");
scanf("%lf",&cash_received);
return cash_received - total_cost;
};

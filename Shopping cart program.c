#include <stdio.h>
#include <string.h>
int main()
{
    char item[50] = "";
    float price = 0.0;
    int quantity = 0;
    float total_price = price * quantity;

    printf("what item do you want to add to the shopping cart?\n");
    scanf("%s", item);
    printf("what is the price for each \n");
    scanf("%f", &price);
    printf("what is the quantity of the item you want to add to the shopping cart?\n");
    scanf("%d", &quantity);
    total_price = price * quantity;
    printf("your total price is: %.2f\n", total_price);

    return 0;
}

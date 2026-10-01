#include<stdio.h>
int main(){
    int no,ctgy;
    int reglr=0,prmim=0,reclnr=0;
    int amount=0;
    int total,discount;
    printf("Enter the number: ");
    scanf("%d",&no);
    for (int i = 1; i <= no; i++)
    {
        printf("Enter category for ticket (1/2/3): ");
        scanf("%d",&ctgy);
        if (ctgy == 1)
        {
            amount += 150;
            reglr++;
        }
        else if (ctgy == 2)
        {
            amount += 250;
            prmim++;
        }
        else if (ctgy == 3)
        {
            amount += 400;
            reclnr++;
        }
        else
        {
            printf("Invalid category!\n");
            i--;  // repeat this ticket
        }
    } 
    if (no>5)
    {
        discount=amount*10/100;
        total=amount-discount;
    }
    else{
        total=amount;
    }
    printf("--------Final Bill---------\n");
    printf("Regular ticket: %d\n",reglr);
    printf("Premium ticket: %d\n",prmim);
    printf("Recliner ticket: %d\n",reclnr);
    printf("total (before discount): %d\n",amount);
    if (no>5)
    {
        printf("Discount applied(10%%): Yes\n");
    }
    else{
        printf("Discount applied(10%%): No\n");
    }
    printf("Final Amount:%d",total);
}
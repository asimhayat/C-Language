#include <stdio.h>

int main()
{
    int amount;
    int note1000, note500, note100, note50, note10, note5,note2,note1;
    note1000 = note500 = note100 = note50 = note10 = note5 = note2 = note1 = 0;
    printf("Enter amount: ");
    scanf("%d", &amount);


    if(amount >= 1000)
    {
        note1000 = amount/1000;
        amount -= note1000 *1000;
    }
    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
    }
     if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }

    printf("Number of notes: \n");
    printf("1000 rs note = %d\n", note1000);
    printf("500  rs note = %d\n", note500);
    printf("100  rs note = %d\n", note100);
    printf("50   rs note = %d\n", note50);
    printf("10   rs note = %d\n", note10);
    printf("5    rs note = %d\n", note5);
    printf("2    rs note = %d\n", note2);
    printf("1    rs note = %d\n", note1);

    return 0;
}

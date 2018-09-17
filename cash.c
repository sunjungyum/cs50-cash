// Sun-Jung Yum
// 20 September 2018
// Problem Set 1

#include <cs50.h>
#include <stdio.h>
#include <math.h>

void determine(int total);

int main(void)
{
    float owed;
    do
    {
        owed = get_float("Change owed: ");
    }
    while (!(owed >= 0.0));
    // Converts to total number of cents
    int change = round(owed * 100);
    determine(change);
}

// Evaluates number of coins necessary and prints answer
void determine(int total)
{
    int numberOfCoins = total / 25;
    total = total % 25;
    numberOfCoins = numberOfCoins + total / 10;
    total = total % 10;
    numberOfCoins = numberOfCoins + total / 5;
    total = total % 5;
    numberOfCoins = numberOfCoins + total;
    printf("%i\n", numberOfCoins);
}

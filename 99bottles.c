#include <stdio.h>

int main()
{
    // Make a loop to iterate from 99 to 1
    for(int i = 99; i >= 1; i--)
    {
        if(i == 1){
            printf("%d bottle of beer on the wall\n",i);
            printf("%d bottle of beer\n",i);
            printf("Take one down, pass it around, %d bottles of beer on the wall.\n",i-1);
        }

        else
        {
            printf("%d bottles of beer on the wall\n",i);
            printf("%d bottles of beer\n",i);
            printf("Take one down, pass it around, %d bottles of beer on the wall.\n",i-1);
        }

    }
    printf("No more bottles of beer on the wall, no more bottles of beer.\n");
    printf("Go to the store and buy some more, 99 bottles of beer on the wall.\n");

    return 0;
}
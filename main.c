/*
 *You have a single 3D printer, and would like to use it to produce
statues. However, printing the statues one by one on the 3D printer takes a long time,
so it may be more time-efficient to first use the 3D printer to print a new printer.
That new printer may then in turn be used to print statues or even more printers.
Print jobs take a full day, and every day you can choose for each printer in your possession to have it print a statue,
or to have it 3D print a new printer (which becomes available for use the next day).

What is the minimum possible number of days needed to print the least statues?

Input:
The input contains a single integer
n, where (1 <= n <= 10,000), the number of statues you need to print.

Output:
Output a single integer, the minimum number of days needed to print at least
statues.

Sample input 1:
1 -> 1

Sample input 2:
5 -> 4
*/



#include <stdio.h>

int main(void) {
    int n;     //@n represents the number of statues we need
    int powerTwo = 1; //@powerTwo needs to start at 1 becasue later it's being multiplied by 2 
    int count = 1; //@count starts at one to account for if n = 1
    
    scanf("%d", &n);
    
//as long as the powerTwo is smaller than n we continue
while (powerTwo <= n) 
    {
    if (n > powerTwo)
        {
        powerTwo = powerTwo * 2; //progressively increment by 2 until n is < powerTwo
        count++;   //acts as days passed as each print takes a full day
        }
    else
        break;
    }

    printf("%d\n", count);

    return 0;
}

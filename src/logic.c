1.	#include "logic.h"
2.	#include <stdbool.h>
3.	#include <stdio.h>
4.	#include <stdlib.h>
5.	int check_inputNum(int number)
6.	{
7.	    if ((number < 1) || (number > 10)) {
8.	        return 0;
9.	    }
10.	    return 1;
11.	}
12.	int check_inputNum2(int number, int* c)
13.	{
14.	    if (*c < number) {
15.	        return 0;
16.	    } else
17.	        *c -= number;
18.	    return 1;
19.	}
20.	int check_compNum(int quantity, int* c)
21.	{
22.	 while (quantity > *c) {
23.	        return 0;
24.	    }
25.	    *c -= quantity;
26.	    return 1;
27.	}

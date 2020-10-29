#include <stdio.h>
#include <stdlib.h>

/**
* Notas existentes: 2, 5, 10, 20, 50, 100, 200
*
*
*/

int getNumberBills(int value, int amount) {    
    return amount / value;
}

int* getListBills(int amount) {
     int* bills = (int*)malloc(7);
     
     *bills = getNumberBills(200, amount);
     amount -= *bills * 200;
     
     *++bills = getNumberBills(100, amount);
     amount -= *bills * 100;
     
     *++bills = getNumberBills(50, amount);
     amount -= *bills * 50;
     
     *++bills = getNumberBills(20, amount);
     amount -= *bills * 20;
     
     *++bills = getNumberBills(10, amount);
     amount -= *bills * 10;
     
     *++bills = getNumberBills(5, amount);
     amount -= *bills * 5;
     
     *++bills = getNumberBills(2, amount);
     amount -= *bills * 2;
     
     return bills;
}

int main(int argc, char *argv[])
{
  int *bills = getListBills(752);
  
  int i = 0;
  for (i = 0; i < 7; i++) {
      printf("Number of bills: %d\n", *(bills+i));
  }
  return 0;
}

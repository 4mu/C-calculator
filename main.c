#include <stdio.h>



void oper1(int num1, int num2, int ans) {
  ans = num1 + num2;
  printf("\n%d + %d = %d", num1, num2, ans);
}



void oper2(int num1, int num2, int ans) {
  ans = num1 - num2;
  printf("\n%d - %d = %d", num1, num2, ans);
}



void oper3(int num1, int num2, int ans) {
  ans = num1 * num2;
  printf("\n%d * %d = %d", num1, num2, ans);
}



void oper4(int num1, int num2, int ans, int rem) {
  ans = num1 / num2;
  rem = num1 % num2;
  printf("\n%d / %d = %d and %d remainder", num1, num2, ans, rem);
}



int main(void) {
  int num1, oper, num2, ans, rem;


  
  printf("Enter a number: ");
  scanf("%d", &num1);
  
  printf("\n[1] = '+'   [2] = '-'   [3] = '*'   [4] = '/'");
  printf("\n\nEnter an operator: ");
  scanf("%d", &oper);
  
  printf("\nEnter a second number: ");
  scanf("%d", &num2);


  
  if (oper == 1) {
    oper1(num1, num2, ans);
  } else if (oper == 2) {
    oper2(num1, num2, ans);
  } else if (oper == 3) {
    oper3(num1, num2, ans);
  } else if (oper == 4) {
    oper4(num1, num2, ans, rem);
  } else {
    printf("\nFollow instructions smh.");
  }


  
  return 0;
}
#include <stdio.h>

int main()
{
  char operator;
  double num1;
  double num2;
  double rezultat;

  printf("\nIntrodu un tip de operatie (+ - / %%): ");
  scanf("%c", &operator);

  printf("Introdu primul numar: ");
  scanf("%lf", &num1);

  printf("Introdu al doilea numar: ");
  scanf("%lf", &num2);

  switch(operator){
    case '+':
      rezultat = num1 + num2;
      printf("Rezultatul adunarii este: %.2lf\n", rezultat);
      break;

    case '-':
      rezultat = num1 - num2;
      printf("Rezultatul scaderii este: %.2lf\n", rezultat);
      break;
    case '*':
      rezultat = num1 * num2;
      printf("Rezultatul inmultirii este: %.2lf\n", rezultat);
      break;
    case '/':
      if(num2 == 0){
        printf("Impartirea cu 0 nu este permisa!\n");
        break;
      }
      else {
        rezultat = num1 / num2;
        printf("Rezultatul impartirii este: %.2lf\n", rezultat);
        break;
      }
    case '%':
      rezultat = (int) num1 % (int) num2;
      printf("Rezultatul pentru restul impartirii este: %.2lf\n", rezultat);
      break;
    default:
      printf("Operatorul \"%c\" nu este valid!\n", operator);
      break;
  }
}

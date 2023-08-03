#include <stdio.h>
#include <ctype.h>

int main()
{
  char unitate;
  double temp;
  double final_temp;

  printf("\nTemperatura este in (F) sau (C)?: ");
  scanf("%c", &unitate);
  
  unitate = toupper(unitate);

  if(unitate == 'C')
  {
     printf("Temperatura e in grade C!\n");
     printf("Introdu temperatura: ");
     scanf("%lf", &temp);
     final_temp = (temp * 9/5) + 32.00;
     printf("%.2lf de grade Celsius in Fahrenheit este %.2lf\n", temp, final_temp);
  }
  else if(unitate == 'F')
  {
    printf("Temperatura este exprimata in grade F!\n");
    printf("Introdu temperatura: ");
    scanf("%lf", &temp) ;
    final_temp = ((temp-32) * 5) / 9;
    printf("%.2lf de grade Fahrenheit in Celsius este %.2lf\n", temp, final_temp);
  }
  else
  {
    printf("%c nu este o unitate de masura valida a temparaturii!\n", unitate);
  }
  
  return 0;
}

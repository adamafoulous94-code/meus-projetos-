#include <stdio.h>
#include <stdlib.h>
#include "date.h"
#include "zodiac.h"


int main() {
Date d = dateReadUser();


printf("Data inserida: ");
datePrint(d);
printf("\n");


ZodiacSign s = zodiacSignOf(d);


printf("O seu signo e: ");
zodiacSignPrint(s);
printf("\n");


return 0;
}

#include "date.h"

Date dateCreate(int day, int month, int year) {
Date d;
d.day = day;
d.month = month;
d.year = year;
return d;
}

Date dateReadUser() {
int d, m, y;
printf("Insira a sua data de nascimento (dd mm yyyy): ");
scanf("%d %d %d", &d, &m, &y);
return dateCreate(d, m, y);
}


void datePrint(Date date) {
printf("%02d-%02d-%04d", date.day, date.month, date.year);
}
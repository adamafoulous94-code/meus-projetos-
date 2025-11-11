#include <stdio.h>
#include "zodiac.h"


ZodiacSign zodiacSignOf(Date d) {
int day = d.day;
int month = d.month;


if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) return ARIES;
if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) return TAURUS;
if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) return GEMINI;
if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) return CANCER;
if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) return LEO;
if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) return VIRGO;
if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) return LIBRA;
if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) return SCORPIO;
if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) return SAGITTARIUS;
if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) return CAPRICORN;
if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) return AQUARIUS;
return PISCES;
}


void zodiacSignPrint(ZodiacSign s) {
switch (s) {
case ARIES: printf("Aries"); break;
case TAURUS: printf("Taurus"); break;
case GEMINI: printf("Gemini"); break;
case CANCER: printf("Cancer"); break;
case LEO: printf("Leo"); break;
case VIRGO: printf("Virgo"); break;
case LIBRA: printf("Libra"); break;
case SCORPIO: printf("Scorpio"); break;
case SAGITTARIUS: printf("Sagittarius"); break;
case CAPRICORN: printf("Capricorn"); break;
case AQUARIUS: printf("Aquarius"); break;
case PISCES: printf("Pisces"); break;
}
}
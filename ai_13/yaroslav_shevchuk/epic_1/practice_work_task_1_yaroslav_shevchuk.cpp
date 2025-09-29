#include <stdio.h>
#include <cmath>

double calculateIncome(double startCapital, float anualRate, int payoutFreq, int duration)
{
  double result = startCapital * pow(1 + anualRate / payoutFreq, payoutFreq * duration);
  return result;
}

int main()
{
  double startCapital, resultCap, difference;
  float anualRate;
  int payoutFreq, duration;

  printf("Enter start capital:");
  scanf("%lf", &startCapital);

  printf("Enter anual rate in %%:");
  scanf("%f", &anualRate);
  anualRate /= 100;

  printf("Enter payout frequency(12,4,1):");
  scanf("%d", &payoutFreq);
  if (!(payoutFreq == 1 || payoutFreq == 4 || payoutFreq == 12))
  {
    printf("Wrong value");
    return 0;
  }

  printf("Enter duration of the investment in years:");
  scanf("%d", &duration);

  resultCap = calculateIncome(startCapital, anualRate, payoutFreq, duration);
  difference = resultCap - startCapital;

  printf("You invested %.2lf with %.2f%% anual rate and payout every %d month. \nYour investment turned out to %.2lf. \nYou gained %.2lf after %d years of investment.", startCapital, anualRate, payoutFreq, resultCap, difference, duration);
  return 0;
}

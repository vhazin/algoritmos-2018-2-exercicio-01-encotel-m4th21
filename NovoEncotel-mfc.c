#include <stdio.h>

int main() {
  char frase[31];
  char frase_num[31];
  int i = 0;
  while(scanf("%s",frase) != EOF) {
  while (frase[i] != '\0') {
    if (frase[i]=='1' || frase[i]=='0' || frase[i]=='-')
      frase_num[i] = frase[i];
    if (frase[i]=='A' || frase[i]=='B' || frase[i]=='C')
      frase_num[i] = '2';
    if (frase[i]=='D' || frase[i]=='E' || frase[i]=='F')
      frase_num[i] = '3';
    if (frase[i]=='G' || frase[i]=='H' || frase[i]=='I')
      frase_num[i] = '4';
    if (frase[i]=='J' || frase[i]=='K' || frase[i]=='L')
      frase_num[i] = '5';
    if (frase[i]=='M' || frase[i]=='N' || frase[i]=='O')
      frase_num[i] = '6';
    if (frase[i]=='P' || frase[i]=='Q' || frase[i]=='R' || frase[i]=='S')
      frase_num[i] = '7';
    if (frase[i]=='T' || frase[i]=='U' || frase[i]=='V')
      frase_num[i] = '8';
    if (frase[i]=='W' || frase[i]=='X' || frase[i]=='Y' || frase[i]=='Z')
      frase_num[i] = '9';
    i++;
  }
  frase_num[i] = '\0';
  printf("\n %s", frase_num);
  }
  return 0;
}
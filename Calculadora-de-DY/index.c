#include <stdio.h>
main()
{
  float precoativo, dividendos, rentabilidadeanual, rentabilidademensal;

  printf ("Digite o preço do ativo: ");
  scanf ("%f", &precoativo);

  printf ("Digite o valor dos dividendos: ");
  scanf ("%f", &dividendos);

rentabilidadeanual = (dividendos * 12 * 100) / precoativo;

 rentabilidademensal = rentabilidadeanual / 12;

 printf ("\nO Dividend Yield anual e de: %.2f%%\n\n", rentabilidadeanual);
 printf ("O Dividend Yield mensal e de: %.2f%%\n\n\n", rentabilidademensal);
 }

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

 printf ("O Dividend Yield anual é de: %f\n\n", rentabilidadeanual);
 printf ("O Dividend Yield mensal é de: %f" rentabilidademensal);
 }
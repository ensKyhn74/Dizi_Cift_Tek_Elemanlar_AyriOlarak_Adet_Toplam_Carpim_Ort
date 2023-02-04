#include <stdio.h>
// n elemanlı dizinin tek elemanları ve çift elemanları için toplamı,çarpımı,ortalamayı ve adetini hesapla

int main() 

{
 
 int n;
 int i;
 int TekToplam = 0,CiftToplam = 0;
 int TekCarpim = 1,CiftCarpim = 1;
 int TekSayaci = 0,CiftSayaci = 0;
 
 printf("dizinin eleman sayisini girin: ");
 scanf("%d",&n);
 printf("\n");
 
 int dizi[n];
 
 for(i = 0 ; i < n ; i++)
 {
  printf("dizi[%d]: ",i);
  scanf("%d",&dizi[i]);
 }
 
 for(i = 0 ; i < n ; i++)
 {
  if(dizi[i] % 2 == 0)
  {
   CiftToplam += dizi[i];
   CiftCarpim *= dizi[i];
   CiftSayaci++;
  }
  
  else
  {
    TekToplam +=  dizi[i];
    TekCarpim *=  dizi[i];
    TekSayaci++;
  }
 }
 
 printf("dizinin %d tane tek %d tane cift elemani var\n",TekSayaci,CiftSayaci);
 
 printf("dizinin tek elemanlarinin toplami: %d\n",TekToplam); 
 printf("dizinin tek elemanlarinin carpimi: %d\n",TekCarpim); 
 
 printf("dizinin cift elemanlarinin toplami: %d\n",CiftToplam); 
 printf("dizinin cift elemanlarinin carpimi: %d\n",CiftCarpim); 
 
 printf("dizinin tek elemanlarinin ortalamasi: %.2f\n",(float)TekToplam/TekSayaci);
 printf("dizinin cift elemanlarinin ortalamasi: %.2f\n",(float)CiftToplam/CiftSayaci);
  
 return 0;
  
}
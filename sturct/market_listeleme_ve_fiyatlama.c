#include <stdio.h>


typedef struct {
int adet;
char isim[20];
float fiyat;
float kalan;
float kg;
}market;

void urunbilgileri(market urun[],int n){
  int i;
  for(i=0;i<n;i++){

    printf("%d.ürünün adını giriniz\n",i+1);
    scanf("%s",urun[i].isim);
    printf("%d.ürünün adedini giriniz\n",i+1);
    scanf("%d",&urun[i].adet);
    printf("%d.ürünün fiyatını giriniz\n",i+1);
    scanf("%f",&urun[i].fiyat);
    printf("%d.ürünün kg'sini giriniz\n",i+1);
    scanf("%f",&urun[i].kg);
  }
}
void urundagıtma(market urun2,market urun){
  char secim[20];
printf("almak istediğiniz ürünün adını giriniz\n");
scanf("%s",urun2.isim);
if(strcmp(urun2.isim,urun.isim)==0)
{
  printf("ürünümüzde bulunmaktadır\n");
  printf("ürünün fiyatı %f\n",urun.fiyat);
  printf("kaç kg almak istiyorsunuz\n");
  scanf("%f",&urun2.kg);
    if(urun2.kg>urun.kg)
      printf("ürünümüzde yeterli miktarda bulunmamaktadır\n");
    else{
      urun2.kalan=urun.kg-urun2.kg;
      printf("ürünümüzde yeterli miktarda bulunmaktadır\n");
      printf("kalan miktar %f\n",urun2.kalan);
      printf("toplam tutar %f\n",urun2.kg*urun.fiyat); 
      printf("-------------\n ");
      printf("başka bir ürün almak istiyor musunuz\n");
      scanf("%s",secim);
      if(strcmp(secim,"evet")==0){
        urundagıtma(urun2,urun);
      }
      else
        printf("teşekkürler\n");
    }
}
else{
  printf("ürünümüzde bulunmamaktadır\n");
  return;
}
}

int main(void){
int n,i;
  printf("kaç tane ürün gireceksiniz\n");
  scanf("%d",&n);
  market urun[n];
  urunbilgileri(urun,n);

  printf("-------------\n");

  market urun2;
  urundagıtma(urun2,urun[i]);

  
return 0;
}

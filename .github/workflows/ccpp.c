#include<stdio.h>
int main()
{
    char isim[30];
    int toplammaas,toplamsaat,saatlikucret;
    float ekucret;


    printf("calisanin ismi:");
    scanf("%s",isim);

    printf("Toplam-saati:");
    scanf("%d",&toplamsaat);

    printf("Saatlik  ucret:");
    scanf("%d",&saatlikucret);

    toplammaas = toplamsaat*saatlikucret;
    printf("Toplam maas:%d\n",toplammaas);

    if(toplamsaat>40)
    {

        toplammaas = toplammaas+saatlikucret;
        printf("Toplam maas:");
        scanf("%d",&toplammaas);

        printf("Saatlik ucret:");
        scanf("%d",&saatlikucret);

        ekucret=0.5*(toplamsaat-40)*saatlikucret;
        printf("Ek Ucret:%.2f",ekucret);

    }
    else{
	    printf("yanlis bir sayi girdini");
    }
    return 0;
}

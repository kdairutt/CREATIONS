#include <stdio.h>

void asalMi(int ilkSayi, int sonSayi);

int main() 
{
    int ilkSayi, sonSayi;
    printf("Lütfen başlangıç ve bitiş değerlerini giriniz: ");
    scanf("%d %d", &ilkSayi, &sonSayi);
    int ilk = ilkSayi;
    int son = sonSayi;
    if(ilkSayi == 1 || ilkSayi <= 0)
        {
            printf("Girilen tamsayı 0'a, 1'e veya negatif bir tamsayıya eşit olamaz.\n");
        }

    else
    {
        asalMi(ilkSayi, sonSayi);
    }

    return 0;
}


void asalMi(int ilkSayi, int sonSayi) 
{
    int d1 = ilkSayi;
    int d2 = sonSayi;
    int sayac;
    int bolensayac = 0;
    int i = 0;
    while(ilkSayi <= sonSayi)
    {
        for(sayac = 1; sayac <= ilkSayi; sayac++)
        {
            if(ilkSayi % sayac == 0)
            {
                bolensayac++;

                if(bolensayac > 2)
                    break;
                

                if (bolensayac == 2)
                {
                    if(sayac == 1 || sayac == ilkSayi)
                    {
                        printf("%d\n", ilkSayi);
                        i++;
                    }
                }
            }
        }
        bolensayac = 0;
        ilkSayi++;
    }

    printf("Sayıları %d ile %d arasındaki asal sayılardır.\n", d1, d2);
    printf("Bu aralıkta toplam %d adet asal sayı bulunmuştur.", i);
}
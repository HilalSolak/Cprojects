//klavyeden girilen bir sayidan sonraki ilk 5 asal sayiyi bulan ve ekranda gösterelim
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int asal_mi(int n)
{
    int asalmi=0;
    bool kontrol=true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            asalmi=1;
            break;
        }
    }
    if(asalmi==0)//asal
        kontrol=true;
    else//asal degil
        kontrol=false;

    return kontrol;
}
main()
{
    int sayi,c=0;
    printf("sayi gir bacim\n");
    scanf("%d",&sayi);

    while(true)
    {
        sayi++;
        if(asal_mi(sayi)==true)
        {
            printf("%d ",sayi);
            c++;
            if(c==5)
                break;
        }

    }

    return 0;
}

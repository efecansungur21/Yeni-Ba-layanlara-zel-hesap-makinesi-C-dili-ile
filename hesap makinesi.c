#include <stdio.h>
#include <math.h>

void menu() {
    printf("\n===== HESAP MAKINESI =====\n");
    printf("1 - Toplama\n");
    printf("2 - Cikarma\n");
    printf("3 - Carpma\n");
    printf("4 - Bolme\n");
    printf("5 - Uslu Sayý (a^b)\n");
    printf("6 - Karekok\n");
    printf("7 - Mod Alma\n");
    printf("0 - Cikis\n");
    printf("Seciminiz: ");
}

int main() {
    int secim;
    double a, b;

    while (1) {
        menu();
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Iki sayi girin: ");
                scanf("%lf %lf", &a, &b);
                printf("Sonuc: %.2lf\n", a + b);
                break;

            case 2:
                printf("Iki sayi girin: ");
                scanf("%lf %lf", &a, &b);
                printf("Sonuc: %.2lf\n", a - b);
                break;

            case 3:
                printf("Iki sayi girin: ");
                scanf("%lf %lf", &a, &b);
                printf("Sonuc: %.2lf\n", a * b);
                break;

            case 4:
                printf("Bolunecek sayi ve bolen sayiyi girin: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0) {
                    printf("HATA: Sifira bolme yapilamaz!\n");
                } else {
                    printf("Sonuc: %.2lf\n", a / b);
                }
                break;

            case 5:
                printf("Taban ve us girin (a^b): ");
                scanf("%lf %lf", &a, &b);
                printf("Sonuc: %.2lf\n", pow(a, b));
                break;

            case 6:
                printf("Karekoku alinacak sayiyi girin: ");
                scanf("%lf", &a);
                if (a < 0) {
                    printf("HATA: Negatif sayinin karekoku yoktur!\n");
                } else {
                    printf("Sonuc: %.2lf\n", sqrt(a));
                }
                break;

            case 7:
                printf("Iki sayi girin (a %% b): ");
                scanf("%lf %lf", &a, &b);
                if (b == 0) {
                    printf("HATA: Mod 0'a gore tanimsizdir!\n");
                } else {
                    printf("Sonuc: %d\n", (int)a % (int)b);
                }
                break;

            case 0:
                printf("Cikis yapiliyor...\n");
                return 0;

            default:
                printf("Gecersiz secim! 0-7 arasinda bir sayi girin.\n");
        }
    }

    return 0;
}

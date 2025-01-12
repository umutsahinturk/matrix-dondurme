#include <stdio.h>

void kullanicidan_matris_al(int n, int arr[n][n]);
void matrisi_saga_dondur(int n, int arr[n][n]);
void matrisi_sola_dondur(int n, int arr[n][n]);

int main() 
{
    int boyut;   

    printf("Matrisin boyutunu girin: ");
    int hata_kodu = scanf("%d", &boyut);

    if (hata_kodu == EOF || boyut <= 0) {
        printf("Lütfen geçerli bir sayı değeri girin. (Pozitif tam sayılar)");
        return 1;
    }

    int matris[boyut][boyut];
    kullanicidan_matris_al(boyut, matris);

    char dondurulecek_yon;
    
    printf("Matrisi sağa döndürmek için 1, sola döndürmek için 0 girin: ");
    scanf(" %c", &dondurulecek_yon);

    if (dondurulecek_yon == '1') 
    {
        matrisi_saga_dondur(boyut, matris);
    }

    else if (dondurulecek_yon == '0') 
    {
        matrisi_sola_dondur(boyut, matris);
    } 
    
    else {
        printf("Lütfen sadece 1 veya 0 girin.\n");
    }

    return 0;
}

void kullanicidan_matris_al(int n, int matris[n][n])
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            printf("Lütfen %dx%d bouyutundaki matrisin %d. satır %d. sütunundaki elemanıni girin: ", n, n, i, j);
            scanf(" %d", &matris[i][j]);
        }
    }
}

void matrisi_saga_dondur(int n, int arr[n][n])
{
printf("slm");
}

void matrisi_sola_dondur(int n, int arr[n][n])
{
printf("slm");
}

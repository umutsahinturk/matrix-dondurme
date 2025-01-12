#include <stdio.h>

void kullanicidan_matris_al(int n, int matris[n][n]);
void matrisi_saga_dondur(int n, int matris[n][n]);
void matrisi_sola_dondur(int n, int matris[n][n]);
void matrisi_bastir(int n, int dondurulmus_matris[n][n]);

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

    matrisi_bastir(boyut, matris);

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

void matrisi_saga_dondur(int n, int matris[n][n])
{

}

void matrisi_sola_dondur(int n, int matris[n][n])
{
    int dondurulmus_matris[n][n];

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            dondurulmus_matris[n-j+1][i] = matris[i][j];
        }
    }

    matrisi_bastir(n, dondurulmus_matris);
}

void matrisi_bastir(int n, int dondurulmus_matris[n][n])
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            printf("%ls ", dondurulmus_matris[i][j]);
        }
    printf("\n");
    }
}

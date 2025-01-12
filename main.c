#include <stdio.h>

int kullanicidan_sayi_al();
void kullanicidan_matris_al(int n, int matris[n][n]);
void matrisi_saga_dondur(int n, int matris[n][n]);
void matrisi_sola_dondur(int n, int matris[n][n]);
void matrisi_bastir(int n, int dondurulmus_matris[n][n]);

int main() 
{
    int boyut;

    printf("Matrisin boyutunu girin: ");
    boyut = kullanicidan_sayi_al();

    int matris[boyut][boyut];
    kullanicidan_matris_al(boyut, matris);

    matrisi_bastir(boyut, matris);

    int dondurulecek_yon;
    
    printf("Matrisi sağa döndürmek için 1, sola döndürmek için 0 girin: ");
    dondurulecek_yon = kullanicidan_sayi_al();

    while (1)
    {
        if (dondurulecek_yon == 1) 
        {
            matrisi_saga_dondur(boyut, matris);
            return 0;
        }

        else if (dondurulecek_yon == 0) 
        {
            matrisi_sola_dondur(boyut, matris);
            return 0;
        } 

        else {
            printf("Lütfen yalnızca 1 veya 0 girin: ");
            dondurulecek_yon = kullanicidan_sayi_al();
        }
    }
}

int kullanicidan_sayi_al()
{
    int sayi;

    while (scanf("%d", &sayi) != 1) 
    {
        printf("Lütfen bir tam sayı girin: ");
        while (getchar() != '\n');
    }
    return sayi;
}

void kullanicidan_matris_al(int n, int matris[n][n])
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("Lütfen %dx%d bouyutundaki matrisin %d. satır %d. sütunundaki elemanıni girin: ", n, n, i + 1, j + 1);
            matris[i][j] = kullanicidan_sayi_al();
        }
    }
}

void matrisi_saga_dondur(int n, int matris[n][n])
{
    int dondurulmus_matris[n][n];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            dondurulmus_matris[j][n-i-1] = matris[i][j];
        }
    }

    matrisi_bastir(n, dondurulmus_matris);
}

void matrisi_sola_dondur(int n, int matris[n][n])
{
    int dondurulmus_matris[n][n];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            dondurulmus_matris[n-j-1][i] = matris[i][j];
        }
    }

    matrisi_bastir(n, dondurulmus_matris);
}

void matrisi_bastir(int n, int dondurulmus_matris[n][n])
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", dondurulmus_matris[i][j]);
        }
    printf("\n");
    }
}

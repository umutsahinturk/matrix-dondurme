#include <stdio.h>

#define N 6

void kullanicidan_matris_al(int arr[N][N]);
void matrisi_saga_dondur(int arr[N][N]);
void matrisi_sola_dondur(int arr[N][N]);

int main() 
{
    int matris[N][N];

    kullanicidan_matris_al(matris);

    char dondurulecek_yon;
    
    printf("Matrisi sağa döndürmek için 1, sola döndürmek için 0 girin: ");
    scanf(" %c", &dondurulecek_yon);

    if (dondurulecek_yon == '1') 
    {
        matrisi_saga_dondur(matris);
    }

    else if (dondurulecek_yon == '0') 
    {
        matrisi_sola_dondur(matris);
    } 
    
    else {
        printf("Lütfen sadece 1 veya 0 girin.\n");
    }

    return 0;
}

void kullanicidan_matris_al(int arr[N][N])
{
    
}

void matrisi_saga_dondur(int arr[N][N]);
{
printf("slm");
}

void matrisi_sola_dondur(int arr[N][N]);
{
printf("slm");
}
#include <stdio.h>

// Bu fonksiyon kullanıcıdan bir tam sayı alır ve döndürür.
int kullanicidan_sayi_al();

// Bu fonksiyon kullanıcıdan bir matris alır.
void kullanicidan_matris_al(int n, int matris[n][n]);

// Bu fonksiyon matrisi saat yönünde döndürür.
void matrisi_saga_dondur(int n, int matris[n][n]);

// Bu fonksiyon matrisi saat yönünün tersinde döndürür.
void matrisi_sola_dondur(int n, int matris[n][n]);

// Bu fonksiyon matrisi ekrana yazdırır.
void matrisi_bastir(int n, int dondurulmus_matris[n][n]);

int main() 
{
    int boyut;

    // Kullanıcıdan matrisin boyutunu al.
    printf("Matrisin boyutunu girin: ");
    boyut = kullanicidan_sayi_al();

    // Matrisi oluştur ve oluşturulan matrisi kullanıcıdan matris alma fonksiyonuna gönder.
    int matris[boyut][boyut];
    kullanicidan_matris_al(boyut, matris);

    // Kullanıcının girdiği matrisi bastir.
    matrisi_bastir(boyut, matris);

    int dondurulecek_yon;

    // Kullanıcıdan matrisin hangi yöne döndürüleceğini al.
    printf("Matrisi sağa döndürmek için 1, sola döndürmek için 0 girin: ");
    dondurulecek_yon = kullanicidan_sayi_al();

    // Kullanıcıdan 1 ya da 0 girene kadar döngü devam eder.
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

    // Kullanıcı bir tamsayı değeri girene kadar döngü devam eder.
    while (scanf("%d", &sayi) != 1) 
    {
        printf("Lütfen bir tam sayı girin: ");
        while (getchar() != '\n'); // Tamponu temizler.
    }
    return sayi;
}

void kullanicidan_matris_al(int n, int matris[n][n]) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("Lütfen %dx%d boyutundaki matrisin %d. satır %d. sütunundaki elemanını girin: ", n, n, i + 1, j + 1);
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
            dondurulmus_matris[j][n-i-1] = matris[i][j]; // Sağa döndürme işlemi.
        }
    }

    // Döndürülen matrisi ekrana yazdır
    matrisi_bastir(n, dondurulmus_matris);
}

void matrisi_sola_dondur(int n, int matris[n][n])
{
    int dondurulmus_matris[n][n];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            dondurulmus_matris[n-j-1][i] = matris[i][j]; // Sola döndürme işlemi için.
        }
    }
    
    matrisi_bastir(n, dondurulmus_matris); // Döndürülen matrisi ekrana yazdır.
}

void matrisi_bastir(int n, int dondurulmus_matris[n][n])
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", dondurulmus_matris[i][j]);
        }
        printf("\n"); // Alt satırıa (matrisin de alt satırına geçildiği için) geç.
    }
}

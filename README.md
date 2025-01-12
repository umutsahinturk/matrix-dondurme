# Matris Döndürme
YRT Aviyonik Departmanı Yazılım Ekibi destek ekip ödevi için hazırlanmıştır.

Bu program, kullanıcının girdiği bir kare matrisin elemanlarını alarak, matrisi sağa veya sola döndürme işlemi gerçekleştirir. 

## Kullanım Talimatları 📝
1. Programı çalıştırın.
2. Matrisin boyutunu girin (örneğin, 3x3).
3. Matrisin her elemanını sırayla girin.
4. Program, matrisi ekrana bastıracak ve hangi yönde döndürmek istediğinizi soracaktır.
5. Sağ (1) veya sol (0) döndürme yönünü seçin.
6. Döndürülen matrisi göreceksiniz.

## Kod Açıklaması 💻

### Main Fonksiyonu
Bu fonksiyon ilk olarak matrisin büyüklüğünü girmenizi ister. Sayı alma fonksiyonu ile matrisin büyüklüğünü aldıktan sonra, istenen boyutlarda bir matris oluşturur. Bu matrisin elemanlarını doldurmak için kullanıcıdan matris alma fonksiyonuna oluşturulan matris gönderilir. En son olarak da sayı alma fonksiyonu ile kullanıcıdan matrisi döndürmesi istenen yön alınır ve matris gerekli fonksiyon kullanılarak o yöne döndürülür.

### Kullanıcıdan Sayı Alma Fonksiyonu
Gayet standart bir sayı alma fonksiyonu. Kullanıcının sayı olmayan değerleri girmesini engellemeye yarıyor.

### Kullanıcıdan Matris Alma Fonksiyonu
Bu fonksiyon iç içe geçmiş 2 for döngüsü kullanarak matrisin tüm elemanlarnı tek tek dolaşıyor; ve üzerinden geçtiği her eleman için sayı alma fonksiyonunu kullanarak kullanıcıdan o indise bir sayı atamasını istiyor.

### Matrisi Sola ve Sağa Döndürme Fonksiyonları
İç içe geçmiş 2 for döngüsü ile matrisin elemanlarını tek tek dolaşıp, üzerinden geçtiği her fonksiyonu döndürüldükten sonra olması gereken yerine koyan iki fonksiyon. Döndürülmüş matrisleri oluşturduktan sonra matris bastırma fonksiyonuna gönderiyor.

### Matrisi Ekrana Bastırma Fonksiyonu
Matrisin her bir elemanının üzerinde tek tek dolaşıp elemanları ekrana bastırıyor.

# 01 - String (Metin) İşlemleri

Bu klasör, C programlama dilinde karakter dizileri (string) ve metin manipülasyonu üzerine temel ve orta düzey örnekleri içermektedir. Örnekler, hem `<string.h>` kütüphanesinin hazır fonksiyonlarını hem de bu işlemlerin arka planda nasıl çalıştığını anlamak için manuel döngü algoritmalarını barındırır.

## 📂 Dosya İçerikleri ve Konular

* **`string_fonksiyonlari.c`**: Dinamik bellek (`malloc`) kullanılarak oluşturulan metinler üzerinde temel kütüphane fonksiyonlarının (`strlen`, `strcat`, `strcpy`) kullanımını gösterir.
* **`string_fonksiyonllar.c`**: Güvenli metin alma yöntemi olan `fgets` kullanımını içerir. String uzunluğu bulma, birleştirme, kopyalama ve karşılaştırma (`strcmp`) işlemlerini hem kütüphane fonksiyonlarıyla hem de manuel `for` döngüleriyle kıyaslamalı olarak sunar.
* **`string_ornekleri.c`**: Kullanıcıdan alınan bir metnin içindeki kelime sayısını ve toplam karakter uzunluğunu manuel algoritmalarla (Null karakter `\0` kontrolü yaparak) hesaplar.
* **`metin_ici_islemler.c`**: `calloc` ile bellekte yer ayrılan bir metin içerisinde belirli bir karakterin, boşlukların ve kelimelerin kaç kez geçtiğini bulan arama algoritmasını içerir.
* **`metin_kelime_islemleri.c`**: Bir string dizisini tersten yazdırma ve metni boşluklardan bölerek her bir kelimeyi alt alta yazdırma (parsing) işlemlerini gerçekleştirir.

## 🧠 Öğrenilen Temel Kavramlar

* **Karakter Dizileri (Char Arrays):** C dilinde string mantığının karakter dizileri üzerine kurulu olması ve her metnin `\0` (Null) karakteri ile bitmesi.
* **Standart Kütüphane (`<string.h>`):** `strlen`, `strcpy`, `strcat`, `strcmp` gibi hazır fonksiyonların projelerde zaman kazandıran kullanımları.
* **Güvenli Girdi (Input Safety):** Buffer overflow (bellek taşması) riskini azaltmak için `gets()` yerine `fgets()` ve `strcspn()` kullanımı.
* **Dinamik Stringler:** `malloc` ve `calloc` kullanılarak çalışma zamanında (runtime) boyutu belirlenen metinler oluşturma.

## 🚀 Nasıl Çalıştırılır?

Herhangi bir C dosyasını derlemek ve çalıştırmak için terminalinizde şu komutları kullanabilirsiniz (GCC derleyicisi gerektirir):

```bash
gcc dosya_adi.c -o program
./program
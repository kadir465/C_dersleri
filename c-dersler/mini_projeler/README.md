# Mini Projeler (Mini Projects)

Bu klasör, C programlama dilinde öğrenilen temel ve ileri seviye yapıların (String, Pointer, Dinamik Bellek Yönetimi, Struct ve Dosya İşlemleri) entegre bir şekilde kullanıldığı kapsamlı konsol uygulamalarını içermektedir. Projeler, veritabanı mantığını simüle eden ve kullanıcı ile etkileşime giren (Interactive CLI) sistemler üzerine kuruludur.

## Dosya İçerikleri ve Konular

* **`kutuphane_sistemi.c`**: Bir kütüphane otomasyonunun temel işlevlerini barındırır. Kitap bilgileri (ID, Ad, Yazar, Sayfa Sayısı) `struct` yapısı ile modellenmiş olup, sisteme eklenecek kitaplar için `malloc` ile bellek ayrılır. Daha sonra ekleme yapılmak istendiğinde `realloc` ile bellek genişletilir. Veriler, kalıcılığı sağlamak adına dosya okuma/yazma modları (`w`, `a`, `r`) kullanılarak bir metin dosyasına kaydedilir ve bu dosyadan okunarak listelenir.
* **`dinamik_bellek_market_urun_listeleme.c`**: Kütüphane sistemine benzer bir mimariyle kurulan, ancak stok takibi (ID, Ürün Adı, Adet) üzerine odaklanan bir market envanter sistemidir. Dinamik bellek yönetimi ve dosya işlemleri entegrasyonunun yanı sıra, dosyadan okuma işlemi sırasında formatlı veri çekmek için `fscanf` fonksiyonunun etkili kullanımı gösterilmiştir.
* **`market_listeleme_ve_fiyatlama.c`**: Bir marketin satış operasyonunu simüle eden algoritmik bir uygulamadır. Yapı (struct) dizileri kullanılarak ürün kataloğu oluşturulur. Kullanıcının almak istediği ürün, katalogdaki ürünlerle `strcmp` (string karşılaştırma) ile aranır; stok miktarı (kg/adet) kontrol edilerek bakiye hesaplaması yapılır. Uygulama, işlemleri tekrar etmek için kendi kendini çağıran (recursive) fonksiyon mantığını barındırır.

## Öğrenilen Temel Kavramlar

* **Sistem Entegrasyonu:** Önceden bağımsız olarak öğrenilen Struct (Veri Modelleme), Dinamik Bellek (Esnek Alan Yönetimi) ve Dosya İşlemlerinin (Veri Kalıcılığı) tek bir projede uyumlu çalışması.
* **CRUD Operasyonları Mantığı:** Modern yazılım geliştirmenin temeli olan Create (Oluşturma) ve Read (Okuma) işlemlerinin dosya sistemi üzerinden simüle edilmesi.
* **Etkileşimli CLI (Command Line Interface):** Kullanıcıyı yönlendiren menüler, girdi kontrolleri ve döngülerle programın yaşam döngüsünün (lifecycle) yönetilmesi.
* **Formatlı Veri Yönetimi:** `fprintf` ve `fscanf` kullanarak düz metin dosyalarında belirli bir formata (tablo mantığına) sadık kalarak veri yazma ve veri ayıklama (parsing) işlemleri.

## Nasıl Çalıştırılır?

Bu klasördeki projeleri derlemek ve çalıştırmak için terminalinizde şu komutları kullanabilirsiniz (GCC derleyicisi gerektirir):

```bash
gcc dosya_adi.c -o program
./program
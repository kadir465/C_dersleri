# 05 - Struct (Yapı) Kavramı

Bu klasör, C programlama dilinde birbirinden farklı veri tiplerini (int, float, char vb.) tek bir çatı altında toplayarak kendi özel veri tiplerimizi (Custom Data Types) oluşturmamızı sağlayan `struct` (yapı) kavramının temellerini ve pratik uygulamalarını içermektedir.

## Dosya İçerikleri ve Konular

* **`struct_mantigi.c`**: Bir `struct` yapısının nasıl tanımlanacağını, başlangıç değerlerinin (initialization) nasıl atanacağını ve struct elemanlarına nokta (`.`) operatörü ile nasıl erişileceğini gösteren temel bir dosyadır. Ayrıca struct değişkenlerinin birbirine kopyalanması (örneğin `x3 = x1;`) ve pointer/array tabanlı string (char) verilerinin değiştirilme yöntemleri (`strcpy` kullanımı) gibi kritik detayları barındırır.
* **`yas_hesabi.c`**: Gün, ay ve yıl bilgilerini tutan özel bir `Date` yapısı (struct) kullanılarak, kullanıcının doğum tarihi ile bugünün tarihi arasındaki farkın hesaplandığı gerçek dünya problemidir. Klasik değişkenler yerine struct kullanılarak tarih verilerinin bellekte nasıl daha derli toplu tutulabileceğini gösterir.
* **`ogrenci_isleri.c`**: `typedef` anahtar kelimesi ile struct tanımlamasını kısaltarak yeni bir veri tipi oluşturmayı ve bu yapıdan oluşan diziler (Array of Structs) kullanmayı açıklar. Birden fazla öğrencinin vize/final notlarını alıp ortalamalarını hesaplayan ve struct dizileri üzerinde döngülerle gezinerek işlem (en yüksek notu bulma vb.) yapmayı sağlayan mini bir bilgi sistemi örneğidir.

## Öğrenilen Temel Kavramlar

* **Veri Gruplama (Data Encapsulation):** İlgili verileri (örneğin bir öğrencinin adı, numarası ve notu) bellekte dağınık tutmak yerine tek bir blok halinde gruplama mantığı.
* **`typedef` Kullanımı:** Her seferinde `struct Ogrenci` yazmak yerine, veri tipine `typedef` ile kısa bir isim atayarak kodun okunabilirliğini artırma.
* **Struct Dizileri (Array of Structs):** Tek bir değişken yerine, aynı struct yapısına sahip yüzlerce veriyi tutabilen diziler oluşturarak basit veritabanı simülasyonları yapma.
* **Bellek Yönetimi ve Atamalar:** Struct değişkenlerini birbirine doğrudan atarken (`=`) bellekteki değerlerin nasıl kopyalandığının kavranması.

## Nasıl Çalıştırılır?

Bu klasördeki herhangi bir C dosyasını derlemek ve çalıştırmak için terminalinizde şu komutları kullanabilirsiniz (GCC derleyicisi gerektirir):

```bash
gcc dosya_adi.c -o program
./program
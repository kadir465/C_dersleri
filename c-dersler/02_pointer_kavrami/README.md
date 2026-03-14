# 02 - Pointer (İşaretçi) Kavramı

Bu klasör, C programlama dilinin en güçlü ve ayırt edici özelliklerinden biri olan Pointer (İşaretçi) kavramını ele almaktadır. Örnekler, bellek adreslerine doğrudan erişim, fonksiyonlara referans yoluyla parametre aktarımı (call by reference) ve pointer aritmetiği gibi temel konuları içermektedir.

## Dosya İçerikleri ve Konular

* **`sekil_alan_cevre_hesabi.c`**: C dilinde bir fonksiyondan normal şartlarda `return` ile tek bir değer döndürülebilirken, pointer'lar kullanılarak aynı anda birden fazla sonucun (örneğin hem alan hem de çevre değerlerinin) fonksiyon dışına nasıl aktarılabileceğini gösteren son derece önemli bir "Call by Reference" (Referans ile Çağrı) örneğidir.
* **`dizi_ilk_adresiyle_islem.c`**: Bir dizinin bellekteki ilk adresini (`&dizi[0]`) bir pointer'a atayarak, pointer aritmetiği (`*(ptr+i)`) yardımıyla dizi elemanları üzerinde gezinmeyi ve dizi üzerinde matematiksel işlemler (toplama, çarpma) yapmayı açıklar.
* **`karakter_silme.c`**: Bir karakter dizisinin (string) bellekteki başlangıç adresinin fonksiyona `char*` olarak gönderilmesini ve bu sayede kopya oluşturmadan orijinal metin üzerinde doğrudan değişiklik (istenmeyen karakteri boşluk ile değiştirme) yapılmasını işler.
* **`pointer_ile_dizi_toplama.c`**: Dizilerin fonksiyonlara nasıl pointer olarak aktarıldığını ve fonksiyon içerisinde bu adresler üzerinden dizi elemanlarının toplamının nasıl hesaplandığını gösteren temel bir pratik dosyasıdır.

## Öğrenilen Temel Kavramlar

* **Bellek Adresleri Yönetimi:** Değişkenlerin bellekte tutulduğu adreslere adres operatörü (`&`) ile erişim sağlama ve bu adresleri pointer (`*`) değişkenlerinde saklama.
* **Referans ile Çağrı (Call by Reference):** Fonksiyonlara değişkenlerin sadece değer kopyasını değil, bellek adreslerini göndererek fonksiyonun doğrudan orijinal değişkenleri değiştirebilmesini sağlama.
* **Pointer Aritmetiği:** Bellek üzerinde adreslere tamsayı ekleyip çıkararak (`ptr + i`) ardışık bellek blokları (diziler) arasında gezinme.
* **Dizi ve Pointer İlişkisi:** C dilinde dizilerin isimlerinin, aslında o dizinin ilk elemanını gösteren sabit bir pointer olduğu mantığının kavranması.

## Nasıl Çalıştırılır?

Herhangi bir C dosyasını derlemek ve çalıştırmak için terminalinizde şu komutları kullanabilirsiniz (GCC derleyicisi gerektirir):

```bash
gcc dosya_adi.c -o program
./program
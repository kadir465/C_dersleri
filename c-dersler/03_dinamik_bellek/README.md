# 03 - Dinamik Bellek Yönetimi (Dynamic Memory Allocation)

Bu klasör, C programlama dilinde bellek yönetiminin çalışma zamanında (runtime) nasıl kontrol edileceğini gösteren uygulamaları içerir. Program çalışmadan önce boyutu bilinmeyen diziler ve matrisler için Heap belleğinden yer ayırma, bu alanı genişletme ve işi bitince belleği sisteme iade etme işlemleri detaylıca işlenmiştir.

## Dosya İçerikleri ve Konular

* **`iki_boyutlu_matris_carpimi.c`**: Dinamik bellek yönetiminin en zorlayıcı kısımlarından biri olan iki boyutlu matris oluşturma işlemini gösterir. `int **` (pointer to pointer) kullanılarak satır ve sütunlar için ayrı ayrı bellek tahsisi yapılır. Matris çarpım kuralları (birinci matrisin sütun sayısının ikinci matrisin satır sayısına eşit olma zorunluluğu) kontrol edilerek çarpım işlemi gerçekleştirilir ve en sonunda `free()` ile bellek temizliği (garbage collection olmayan bir dilde en önemli adım) yapılır.
* **`malloc_calloc_ornek_1.c`**: Bellek tahsisi için `malloc` ve `calloc` fonksiyonlarının, belleği yeniden boyutlandırmak için ise `realloc` fonksiyonunun kullanımını içerir. Ayrıca, ayrılan dinamik bellek alanlarının fonksiyonlara pointer parametresi olarak nasıl gönderileceğini ve bu fonksiyonlar üzerinden toplam, ortalama ve en büyük değer gibi hesaplamaların nasıl yapılacağını gösterir.
* **`malloc_calloc_ornek_2.c`**: Başlangıçta kullanıcıdan alınan boyuta göre `malloc` ile bir dizi oluşturulmasını ve daha sonra çalışma zamanında bu dizinin boyutunun `realloc` kullanılarak mevcut veriler kaybolmadan nasıl genişletilebileceğini (örnekte 3 eleman ekleyerek) gösteren pratik bir senaryodur.

## Öğrenilen Temel Kavramlar

* **Heap Bellek Kullanımı:** Stack üzerinde derleme zamanında (compile-time) sabit bellek ayırmak yerine, Heap üzerinde çalışma zamanında (runtime) esnek bellek ayırma.
* **Temel Bellek Fonksiyonları (`<stdlib.h>`):**
  * `malloc()`: Belirtilen byte kadar bellekte yer ayırır (içerisinde rastgele çöp değerler olabilir).
  * `calloc()`: Belirtilen eleman sayısı ve boyutu kadar yer ayırır ve içini sıfır (0) ile doldurur.
  * `realloc()`: Önceden ayrılmış bir bellek bloğunun boyutunu veri kaybı yaşatmadan büyütür veya küçültür.
  * `free()`: Ayrılan dinamik belleği işletim sistemine geri iade eder.
* **Çoklu İşaretçiler (Pointer to Pointer):** İki veya daha fazla boyutlu dinamik diziler oluşturmak için işaretçileri işaret eden değişkenlerin (`**`) mantığının kavranması.
* **Memory Leak (Bellek Sızıntısı) Önleme:** Programın sistem kaynaklarını tüketmemesi için kullanılan her `malloc/calloc` işleminin karşılığında ilgili alanın `free()` ile temizlenmesi.

## Nasıl Çalıştırılır?

Herhangi bir C dosyasını derlemek ve çalıştırmak için terminalinizde şu komutları kullanabilirsiniz (GCC derleyicisi gerektirir):

```bash
gcc dosya_adi.c -o program
./program
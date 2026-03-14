# 04 - Algoritmalar ve Sıralama (Algorithms and Sorting)

Bu klasör, bilgisayar bilimlerinin temelini oluşturan sıralama algoritmalarının (Sorting Algorithms) C programlama dilindeki implementasyonlarını içermektedir. Projeler, algoritmaların sadece döngülerle değil; pointer mantığı (Referans ile Çağrı) ve dinamik bellek yönetimi ile nasıl entegre edileceğini gösteren ileri seviye örnekler barındırmaktadır.

## Dosya İçerikleri ve Konular

* **`bubble_sort.c`**: Temel Bubble Sort (Kabarcık Sıralaması) algoritmasının standart bir uygulamasıdır. `time.h` ve `stdlib.h` kütüphaneleri kullanılarak (`rand` ve `srand`) rastgele sayılardan oluşan bir dizi üretilmesini ve bu dizinin algoritma yardımıyla sıralanarak yeni bir diziye aktarılmasını gösterir.
* **`pointer_ile_bubble_sort.c`**: Bubble Sort algoritmasının pointer (işaretçi) yapısıyla optimize edilmiş halidir. Dizi elemanlarının yer değiştirme işlemi (swap) için ayrı bir fonksiyon tanımlanmış olup, değişkenlerin sadece değerleri değil bellek adresleri üzerinden doğrudan değiştirilmesi (Call by Reference) mantığı uygulanmıştır.
* **`dinamik_bellek_selection_sort.c`**: Selection Sort (Seçmeli Sıralama) algoritmasını Dinamik Bellek Yönetimi ile birleştiren kapsamlı bir uygulamadır. `malloc` ile çalışma zamanında oluşturulan bir dizinin sıralanmasının ardından, kullanıcının talebine göre `realloc` fonksiyonu ile dizinin boyutunun genişletilmesi ve yeni eklenen elemanlarla birlikte dizinin tekrar sıralanması işlemlerini içerir. Ayrıca bellek ayırma hatalarına karşı güvenlik kontrolleri barındırır.

## Öğrenilen Temel Kavramlar

* **Sıralama Algoritmaları Mantığı:** * *Bubble Sort:* Yan yana duran elemanları karşılaştırıp yer değiştirerek en büyük/küçük elemanı dizinin sonuna taşıma işlemi.
  * *Selection Sort:* Dizideki en küçük (veya en büyük) elemanı bularak dizinin başındaki elemanla yer değiştirme işlemi.
* **Algoritma ve Bellek Entegrasyonu:** Teorik algoritmaların, statik diziler yerine çalışma zamanında boyutu değişebilen dinamik diziler üzerinde uygulanması.
* **Modüler Kodlama:** Algoritma içindeki yer değiştirme (swap) gibi tekrar eden işlemlerin pointer'lar yardımıyla ayrı fonksiyonlara taşınarak kodun daha okunabilir ve yönetilebilir hale getirilmesi.
* **Rastgele Veri Üretimi:** Algoritmaları test etmek için `rand()` fonksiyonu ile rastgele veri setleri oluşturma.

## Nasıl Çalıştırılır?

Bu klasördeki herhangi bir C dosyasını derlemek ve çalıştırmak için terminalinizde şu komutları kullanabilirsiniz (GCC derleyicisi gerektirir):

```bash
gcc dosya_adi.c -o program
./program
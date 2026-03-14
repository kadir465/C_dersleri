# 06 - Dosya İşlemleri (File Operations)

Bu klasör, C programlama dilinde RAM üzerinde geçici olarak tutulan verilerin, kalıcı depolama birimlerine (hard disk) metin dosyaları (`.txt`) formatında nasıl yazılacağını ve bu dosyalardan nasıl okunacağını gösteren uygulamaları içerir. 

## Dosya İçerikleri ve Konular

* **`dosya_islemleri_temel.c`**: Dosya açma kiplerinin (`w` - write, `a` - append) temellerini ve bir dosyaya veri yazmak için kullanılan çeşitli fonksiyonların (`putc`, `fputc`, `fprintf`, `fputs`) farklarını gösteren giriş niteliğinde bir dosyadır. Dosyanın başarıyla açılıp açılamadığını kontrol eden `NULL` mekanizması da işlenmiştir.
* **`dosya_islemleri.c`**: Kullanıcıdan alınan bir metnin dosyaya yazılması, ardından aynı dosyanın okuma modunda (`r` - read) tekrar açılarak içeriğinin hem bütün bir metin olarak (`fgets`) hem de karakter karakter (`fgetc` ve `feof` kullanılarak) terminale yazdırılması işlemlerini kapsar.
* **`dosya_random_okuma_yazma.c`**: Rastgele üretilen (`rand()`) sayıda, yine rastgele üretilen ASCII karakterlerinin bir dosyaya yazılması ve ardından dosya sonuna (EOF - End of File) ulaşılana kadar bu karakterlerin okunmasını gösteren algoritmik bir örnektir.
* **`dosyadan_dosyaya_yazma.c`**: Bu serinin en gelişmiş örneklerinden biridir. Struct yapıları ve dinamik bellek (`malloc`, `realloc`) kullanılarak alınan kullanıcı kayıtlarının önce bir dosyaya (`test.txt`) yazılması, ardından programın başka bir aşamasında bu dosyadan yapısal olarak (`fscanf` ile formatlı okuma) çekilip başka bir yedek dosyaya (`gec.txt`) aktarılması işlemini gerçekleştirir.

## Öğrenilen Temel Kavramlar

* **Dosya İşaretçileri (File Pointers):** `FILE*` veri tipi ile dosyaların bellekteki başlangıç adreslerini referans alma ve dosyayı yönetme.
* **Dosya Açma Kipleri (File Modes):** * `r` (Read): Sadece okuma yapar, dosya yoksa hata verir.
  * `w` (Write): Yazma yapar, dosya yoksa oluşturur, varsa içini siler.
  * `a` (Append): Dosyanın sonuna ekleme yapar, eski verileri korur.
* **Dosya Okuma/Yazma Fonksiyonları:** Tekil karakter işlemleri (`fgetc`, `fputc`), metin bloğu işlemleri (`fgets`, `fputs`) ve formatlı veri işlemleri (`fscanf`, `fprintf`).
* **Dosya Güvenliği ve Kapatma:** Her `fopen()` işleminin ardından bellekte yer kaplamaması ve veri bozulması yaşanmaması için dosyanın `fclose()` ile kapatılması zorunluluğu.
* **EOF (End of File) Kontrolü:** `feof()` fonksiyonu ile dosyanın sonuna gelinip gelinmediğinin kontrol edilerek döngülerin güvenli bir şekilde sonlandırılması.

## Nasıl Çalıştırılır?

Bu klasördeki herhangi bir C dosyasını derlemek ve çalıştırmak için terminalinizde şu komutları kullanabilirsiniz (GCC derleyicisi gerektirir):

```bash
gcc dosya_adi.c -o program
./program
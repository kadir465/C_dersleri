# C Programlama: Temelden İleri Seviyeye Uygulamalar

Bu depo, C programlama dilinin temel yapıtaşlarından başlayarak dinamik bellek yönetimi, işaretçiler (pointers) ve veri kalıcılığı (dosya işlemleri) gibi ileri seviye konuları kapsayan eğitim notlarını, algoritmaları ve konsol uygulamalarını içermektedir.

Projedeki tüm kodlar, teorik bilgilerin gerçek dünya senaryolarında (mini otomasyonlar, hesaplama araçları, veritabanı simülasyonları) nasıl kullanılacağını göstermek amacıyla yazılmıştır.

## İçindekiler ve Klasör Yapısı

Proje, öğrenme hiyerarşisine uygun olarak numaralandırılmış modüllerden oluşmaktadır. Her klasörün içerisinde, o konuyu detaylandıran özel bir `README.md` dosyası bulunmaktadır:

* **[01_string_islemleri](./01_string_islemleri):** C dilinde karakter dizileri, standart kütüphane fonksiyonları (`<string.h>`) ve manuel metin manipülasyonu algoritmaları.
* **[02_pointer_kavrami](./02_pointer_kavrami):** Bellek adresleme, Referans ile Çağrı (Call by Reference) ve işaretçi aritmetiği.
* **[03_dinamik_bellek](./03_dinamik_bellek):** Heap üzerinde çalışma zamanında bellek yönetimi (`malloc`, `calloc`, `realloc`, `free`) ve matris işlemleri.
* **[04_algoritmalar_ve_siralama](./04_algoritmalar_ve_siralama):** Bubble Sort ve Selection Sort gibi sıralama algoritmalarının işaretçiler ve dinamik dizilerle entegrasyonu.
* **[05_struct_yapilari](./05_struct_yapilari):** Kendi veri tiplerimizi oluşturma, verileri gruplama (encapsulation) ve struct dizileri.
* **[06_dosya_islemleri](./06_dosya_islemleri):** Veri kalıcılığını sağlamak için dosyaya yazma, dosyadan okuma ve formatlı veri çekme işlemleri.
* **[mini_projeler](./mini_projeler):** Öğrenilen tüm konuların (Struct, Dinamik Bellek, Pointer ve Dosya İşlemleri) bir araya getirildiği interaktif kütüphane ve market stok otomasyonları.

## Kullanılan Teknolojiler

* **Programlama Dili:** C
* **Derleyici:** GCC (GNU Compiler Collection)
* **Geliştirme Ortamı:** Visual Studio Code

## Nasıl Çalıştırılır?

Bu depodaki herhangi bir programı yerel ortamınızda derlemek ve çalıştırmak için terminal üzerinden GCC derleyicisini kullanabilirsiniz:

```bash
# Kodu derlemek için
gcc ornek_dosya.c -o program_adi

# Derlenen programı çalıştırmak için (Windows)
program_adi.exe

# Derlenen programı çalıştırmak için (Linux / macOS)
./program_adi
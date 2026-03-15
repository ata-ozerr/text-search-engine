# Text Search Engine (C)

Bu proje, bir metin dosyası içerisinde belirli bir kelimenin aranmasını sağlayan basit bir **Metin Arama Sistemi** uygulamasıdır. Program **C programlama dili** kullanılarak geliştirilmiştir.

Kullanıcı tarafından girilen kelime, seçilen metin dosyası içerisinde aranır ve kelimenin **kaç kez geçtiği** ile birlikte **hangi satırlarda bulunduğu** kullanıcıya raporlanır.

Bu proje, İzmir Bakırçay Üniversitesi Bilgisayar Mühendisliği bölümünde verilen mühendislik proje dersi kapsamında geliştirilmiştir.

---

## 📌 Proje Amacı

Bu projenin amacı, metin dosyaları üzerinde kelime arama işlemini gerçekleştiren bir program geliştirmektir. Program, kullanıcıdan alınan kelimeyi bir metin dosyası içerisinde arar ve sonuçları analiz ederek kullanıcıya sunar.

Bu proje sayesinde aşağıdaki konularda deneyim kazanılması hedeflenmektedir:

* C dilinde **dosya işlemleri**
* **String (karakter dizisi) işlemleri**
* **Algoritmik düşünme**
* **Metin işleme teknikleri**
* **GitHub ile proje yönetimi**

---

## ⚙️ Program Özellikleri

Program aşağıdaki işlemleri gerçekleştirmektedir:

* Kullanıcıdan **aranacak kelimeyi alır**
* Belirtilen **metin dosyasını açar**
* Dosyayı **satır satır okur**
* Kelimenin geçtiği yerleri **tespit eder**
* Kelimenin **toplam tekrar sayısını hesaplar**
* Kelimenin geçtiği **satır numaralarını listeler**

---

## 🧠 Programın Çalışma Mantığı

Program aşağıdaki adımlarla çalışmaktadır:

1. Kullanıcıdan aranacak kelime alınır.
2. Kullanıcıdan okunacak metin dosyasının adı alınır.
3. Program metin dosyasını açar.
4. Dosya **satır satır okunur**.
5. Her satır içerisinde aranan kelime kontrol edilir.
6. Kelime bulunduğunda:

   * Toplam tekrar sayısı artırılır
   * Satır numarası kaydedilir
7. Dosya taraması tamamlandıktan sonra sonuçlar kullanıcıya gösterilir.

---

## 📂 Proje Klasör Yapısı

```
text-search-engine
│
├── main.c
├── search.c
├── search.h
├── sample.txt
└── README.md
```

**main.c**
Programın başlangıç noktasıdır ve kullanıcı ile etkileşimi sağlar.

**search.c / search.h**
Kelime arama işlemlerini gerçekleştiren fonksiyonları içerir.

**sample.txt**
Programı test etmek için kullanılan örnek metin dosyasıdır.

---

## ▶️ Programı Derleme ve Çalıştırma

### Derleme

```bash
gcc main.c search.c -o search
```

### Çalıştırma

```bash
./search
```

Program çalıştırıldığında kullanıcıdan:

* Dosya adı
* Aranacak kelime

istenir.

---

## 💻 Örnek Çalışma

```
Dosya adını giriniz: sample.txt
Aranacak kelimeyi giriniz: bilgisayar

Kelime toplam 3 kez bulundu.

Kelimenin geçtiği satırlar:
2
6
10
```

---

## 🛠 Kullanılan Teknolojiler

* C Programlama Dili
* Standart C Kütüphaneleri
* Git
* GitHub

---

## 📄 Not

Bu proje eğitim amaçlı geliştirilmiştir.

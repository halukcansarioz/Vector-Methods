# 📐 Vector-Methods
### (Sınırlı Kaynak Ortamları için Basit C++ Vektör Kütüphanesi)

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++](https://img.shields.io/badge/C++-00599C?style=flat&logo=c%2B%2B&logoColor=white)](#)
[![Template](https://img.shields.io/badge/Template%20Class-4D4D4D?style=flat&logo=c%2B%2B&logoColor=white)](#)
[![Made with Learning](https://img.shields.io/badge/Made%20with-Learning-1f425f.svg)](#)

Bu proje, C++ dilinde template yapısı kullanılarak geliştirilmiş, standart kütüphaneye alternatif olarak tasarlanmış basit bir vektör (dinamik dizi) kütüphanesidir. Özellikle sınırlı kaynaklara sahip ortamlarda faydalı olabilecek bir yaklaşım sunar.

## 📚 İçindekiler
- [Proje Hakkında](#proje-hakkında)
- [Özellikler](#özellikler)
- [Kullanılan Teknolojiler](#kullanılan-teknolojiler)
- [Kurulum ve Kullanım](#kurulum-ve-kullanım)
- [API Referansı](#api-referansı)
- [Proje Yapısı](#proje-yapısı)
- [Geliştirme Süreci](#geliştirme-süreci)
- [Katkıda Bulunma](#katkıda-bulunma)
- [İletişim](#iletisim)
- [Lisans](#lisans)

---

## Proje Hakkında
Bu kütüphane, C++ programlama becerilerini geliştirmek ve şablon (template) sınıfların çalışma prensiplerini pekiştirmek amacıyla yazılmıştır. `myVector` adlı template sınıf; ekleme, silme, sıralama ve indeksleme gibi temel vektör işlemlerini destekler. `main()` fonksiyonu içerisinde hem `char` hem de `int` türleriyle örnek kullanım senaryoları sunulmuştur.

* **Geliştirici:** Haluk Can SARIÖZ
* **Tür:** C++ Template Kütüphanesi
* **Amaç:** C++ dilinde template sınıfları ve dinamik bellek yönetimini pekiştirmek

---

## Özellikler
* **Generic (Tür Bağımsız) Tasarım:** Template yapısı sayesinde farklı veri türleriyle (`int`, `char`, `double`, vb.) çalışabilir.
* **Temel Vektör İşlemleri:** Ekleme, silme, erişme ve sıralama gibi fonksiyonlar.
* **Hafif ve Taşınabilir:** Minimal bağımlılıkla, sınırlı kaynaklara sahip sistemlerde kullanıma uygun.
* **Kapsamlı Örnek Kullanım:** `main()` fonksiyonu içerisinde iki farklı türle uygulama gösterimi.

---

## Kullanılan Teknolojiler
* **C++:** Projenin geliştirildiği ana dil.
* **Template Metaprogramming:** Tür bağımsız sınıf ve fonksiyon tasarımı.
* **GCC / G++:** Derleme işlemleri için kullanılan araç.
* **VS Code / Dev-C++:** Geliştirme ortamı olarak kullanılan editörler.

---

## Kurulum ve Kullanım

### 1. Depoyu Klonlayın
```bash
git clone https://github.com/halukcansarioz/Vector-Methods.git
```

### 2. Proje Dizinine Gidin
```bash
cd Vector-Methods
```

### 3. Uygulamayı Derleyin

* **Linux / macOS için:**
```bash
g++ Vector.cpp -o vector_app
```

* **Windows için (MinGW / GCC kurulu olmalı):**
```bash
g++ Vector.cpp -o vector_app.exe
```

### 4. Uygulamayı Çalıştırın
```bash
# Linux / macOS
./vector_app

# Windows
vector_app.exe
```

> 💡 **Kullanım:** Program çalıştığında önce vektör boyutunu girmeniz, ardından sırasıyla karakter ve tam sayı değerlerini girmeniz beklenir.

---

## API Referansı

`myVector<T>` sınıfı aşağıdaki metotları sağlar:

| Metot | Açıklama |
|-------|----------|
| `myVector(int num)` | Belirtilen boyutta vektör oluşturur. |
| `~myVector()` | Belleği serbest bırakır. |
| `int size()` | Vektördeki mevcut eleman sayısını döndürür. |
| `void add(T s)` | Vektöre yeni eleman ekler. Kapasite aşılırsa uyarı verir. |
| `T getAt(int index)` | Belirtilen indeksteki elemanı döndürür. |
| `void getElement(int index)` | Belirtilen indeksteki elemanı ekrana yazdırır. |
| `void remove(T s)` | Belirtilen değere sahip ilk elemanı siler. |
| `void erase(int index)` | Belirtilen indeksteki elemanı siler. |
| `void sort()` | Vektördeki elemanları artan sırada sıralar (Bubble Sort). |

---

## Proje Yapısı
```text
Vector-Methods/
├── Vector.h                  # Template sınıf başlık dosyası (arayüz)
├── Vector.cpp                # Metot implementasyonları ve örnek kullanım
├── .gitattributes            # Git yapılandırma dosyası
└── README.md                 # Proje dökümantasyonu
```

---

## Geliştirme Süreci

### 1. Forklama
Kütüphaneyi kendi ihtiyaçlarınıza göre genişletmek için depoyu fork'layabilirsiniz.

### 2. Yeni Dal (Branch) Oluşturma
```bash
git checkout -b ozellik/yeni-metot
```

### 3. Kodları Gönderme (Push)
```bash
git push origin ozellik/yeni-metot
```

---

## Katkıda Bulunma
1. Bu depoyu **Fork**'layın.
2. Bir **Branch** oluşturun (`git checkout -b feature/YeniMetot`).
3. Yeni bir metot ekleyin veya mevcut kodu iyileştirin.
4. Değişikliklerinizi **Commit** edin (`git commit -m 'Ekleme: reverse() metodu'`).
5. Kodlarınızı **Push**'layın (`git push origin feature/YeniMetot`).
6. Bir **Pull Request** açın.

> 💡 **Öneri:** Eklenebilecek yeni metotlar: `reverse()`, `contains()`, `clear()`, `resize()`, `operator[]` aşırı yüklemesi.

---

<a name="iletisim"></a>
## İletişim
**Haluk Can Sarıöz** - [GitHub Profilim](https://github.com/halukcansarioz)  
**Proje Linki:** [https://github.com/halukcansarioz/Vector-Methods](https://github.com/halukcansarioz/Vector-Methods)

---

## Lisans
Bu proje [MIT Lisansı](LICENSE) ile lisanslanmıştır.

# LATIHAN4DPBO2023
> Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.

### SOAL
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas tersebut:
- Mahasiswa: NIM, nama, jenis_kelamin, fakultas
- Human: NIK, nama, jenis_kelamin
- SivitasAkademik: asal_universitas, email_edu
- Dosen: NIP, nama, jenis_kelamin, fakultas, pend_terakhir, keahlian
- Course: nama_matakuliah, 
- Program Studi: nama_prodi, kode, course

### BAHASA
- Python

``` py Main.py ```
- C++

``` g++ *.cpp -o Main.exe ```
### CLASS DIAGRAM
![image](https://user-images.githubusercontent.com/100895165/223082770-53044801-172b-444e-9996-a0ab74f36f44.png)

### ALUR PROGRAM
- Program ini memakai hardcode sebagai input nya.
- Mahasiswa, Dosen, Prodi, dan Course dimasukan ke dalam list.
- Sehingga outputnya akan mengeluarkan list program studi yang di dalamnya terdapat list Mahasiswa, Dosen, dan Course.
- List Program studi
    - list mahasiswa
    - list dosen
    - list course

### CLASS
Pada bahasa pemrograman Python terdapat 7 class, yaitu:
- Human
- Sivitas Akademik
- Mahasiswa
- Dosen
- Program Studi
- Course

Sedangkan pada bahasa pemrograman C++, terdapat 7 class yang sama seperti di atas dan ditambah dengan 1 header.

### Relasi
- Human, sebagai base class atau parent dari semua class.
- Sivitas Akademik, memiliki relasi "is a" dengan Human. Karena Sivitas Akademik adalah seorang Manusia dan objeknya sama yaitu Manusia.
- Mahasiswa is a Sivitas Akademik, karena seorang Mahasiswa termasuk ke dalam Sivitas Akademik.
- Dosen is a Sivitas Akademik, karena seorang Dosen termasuk ke dalam Sivitas Akademik
- Prodi memiliki relasi "has a" dengan class Mahasiswa, Dosen, dan Course. Karena di dalam program studi pasti memiliki Mahasiswa,  Dosen, dan Course

### HASIL PROGRAM PYTHON
- daftar mahasiswa

![image](https://user-images.githubusercontent.com/100895165/223084318-ffdae471-25df-4d97-8b52-51ceb31cfd3c.png)
- daftar dosen

![image](https://user-images.githubusercontent.com/100895165/223084351-b30e5ba4-c0a1-4ea9-8efe-8bd8fb623da4.png)
- daftar course

![image](https://user-images.githubusercontent.com/100895165/223084366-48766487-5642-42fe-a70f-e142a8f4b4e3.png)

### HASIL PROGRAM C++
<img width="263" alt="image" src="https://user-images.githubusercontent.com/100895165/224046564-c19cbbce-862d-49e4-8a44-e33ffb46ef8f.png">

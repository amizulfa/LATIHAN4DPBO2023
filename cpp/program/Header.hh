/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

/* Header ini berisi deklarasi dari class-class yang tersedia*/

#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

// base class : Human
class Human
{
private:
    // atribut
    int nik;
    string name;
    string gender;

public:
    // constructor
    Human();
    Human(int nik, string name, string gender);

    /* Getter dan Setter*/

    // get Nik
    int getNik();
    // set Nik
    void setNik(int nik);
    // get Name
    string getName();
    // set Name
    void setName(string name);
    // get Gender
    string getGender();
    // set Gender
    void setGender(string gender);

    // destructor
    ~Human();
};

// child class dari class Human
class SivitasAkademik : public Human
{
private:
    string asalUniv;
    string emailEdu;

public:
    // constructor
    SivitasAkademik();
    SivitasAkademik(int nik, string name, string gender, string asalUniv, string emailEdu);

    /* Getter dan Setter */
    string getAsalUniv();
    void setAsalUniv(string asalUniv);
    string getEmailEdu();
    void setEmailEdu(string emailEdu);

    ~SivitasAkademik();
};

// child class dari class human
class Mahasiswa : public SivitasAkademik
{
private:
    int nim;
    string fakultas;

public:
    // constructor
    Mahasiswa();
    Mahasiswa(int nik, string name, string gender, string asalUniv, string emailEdu, int nim, string fakultas);

    /* Getter dan Setter */
    string getFakultas();
    void setFakultas(string fakultas);
    int getNim();
    void setNim(int nim);

    ~Mahasiswa();
};

// child class dari class SivitasAkademik
class Dosen : public SivitasAkademik
{
private:
    int nip;
    string fakultas;
    string pendTerakhir;
    string keahlian;

public:
    // constructor
    Dosen();
    Dosen(int nik, string name, string gender, string asalUniv, string emailEdu, int nip, string fakultas, string pendTerakhir, string keahlian);

    // Getter dan Setter
    string getFakultas();
    void setFakultas(string fakultas);
    int getNip();
    void setNip(int nip);
    string getPendTerakhir();
    void setPendTerakhir(string pendTerakhir);
    string getKeahlian();
    void setKeahlian(string keahlian);

    // destructor
    ~Dosen();
};

// class course
class Course
{
private:
    string namaMK;

public:
    // constructor
    Course();
    Course(string namaMK);

    // getter dan setter
    string getNamaMK();
    void setNamaMK(string namaMK);
    // destructor
    ~Course();
};

// class prodi
class Prodi
{
private:
    string namaProdi;
    int kodeProdi;
    list<Mahasiswa> m;
    list<Dosen> d;
    list<Course> c;

public:
    Prodi();
    Prodi(int kodeProdi, string namaprodi);
    Prodi(int kodeProdi, string namaprodi, Mahasiswa m, Dosen d, Course c);

    list<Mahasiswa> getMahasiswa();
    void setMahasiswa(Mahasiswa m);
    list<Dosen> getDosen();
    void setDosen(Dosen d);
    list<Course> getCourse();
    void setCourse(Course c);
    string getNamaProdi();
    void setNamaProdi(string namaProdi);
    int getKodeProdi();
    void setKodeProdi(int kodeProdi);

    ~Prodi();
};

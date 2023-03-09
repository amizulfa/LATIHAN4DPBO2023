/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

// import library
#include "Header.hh"

/* contructor */
Prodi::Prodi()
{
    kodeProdi = 0;
    namaProdi = "";
}

// constructor with parameter
Prodi::Prodi(int kodeProdi, string namaProdi, Mahasiswa m, Dosen d, Course c)
{
    this->kodeProdi = kodeProdi;
    this->namaProdi = namaProdi;
    this->m.push_back(m);
    this->d.push_back(d);
    this->c.push_back(c);
}

/* Getter dan Setter*/

// Get kodeProdi
int Prodi::getKodeProdi()
{
    return kodeProdi;
}

// set kodeProdi
void Prodi::setKodeProdi(int kodeProdi)
{
    this->kodeProdi = kodeProdi;
}

// get namaProdi
string Prodi::getNamaProdi()
{
    return namaProdi;
}

// set namaProdi
void Prodi::setNamaProdi(string namaProdi)
{
    this->namaProdi = namaProdi;
}

void Prodi::setMahasiswa(Mahasiswa m)
{
    this->m.push_back(m);
}

list<Mahasiswa> Prodi::getMahasiswa()
{
    return m;
}

void Prodi::setDosen(Dosen d)
{
    this->d.push_back(d);
}

list<Dosen> Prodi::getDosen()
{
    return d;
}

void Prodi::setCourse(Course c)
{
    this->c.push_back(c);
}

list<Course> Prodi::getCourse()
{
    return c;
}
/* Destructor */
Prodi::~Prodi()
{
}

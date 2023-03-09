/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

#include "Header.hh"

Mahasiswa::Mahasiswa() : SivitasAkademik()
{
}

Mahasiswa::Mahasiswa(int nik, string name, string gender, string asalUniv, string emailEdu, int nim, string fakultas)
    : SivitasAkademik(nik, name, gender, asalUniv, emailEdu)
{
    this->nim = nim;
    this->fakultas = fakultas;
}

int Mahasiswa::getNim()
{
    return nim;
}

void Mahasiswa::setNim(int nim)
{
    this->nim = nim;
}

string Mahasiswa::getFakultas()
{
    return fakultas;
}

void Mahasiswa::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

Mahasiswa::~Mahasiswa()
{
}

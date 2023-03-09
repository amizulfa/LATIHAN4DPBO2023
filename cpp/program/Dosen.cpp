/* Saya Amida Zulfa Laila NIp 2101147 mengerjakan Latihan Praktikum 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

#include "Header.hh"

Dosen::Dosen() : SivitasAkademik()
{
}

// Constructor dengan parameter
Dosen::Dosen(int nik, string name, string gender, string asalUniv, string emailEdu, int nip, string fakultas, string pendTerakhir, string keahlian) : SivitasAkademik(nik, name, gender, asalUniv, emailEdu)
{
    this->nip = nip;
    this->fakultas = fakultas;
    this->pendTerakhir = pendTerakhir;
    this->keahlian = fakultas;
}

/* Getter dan Setter*/

// get nip
int Dosen::getNip()
{
    return nip;
}

// set nip
void Dosen::setNip(int nip)
{
    this->nip = nip;
}

// Get Fakultas
string Dosen::getFakultas()
{
    return fakultas;
}

// Set Fakultas
void Dosen::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

string Dosen::getPendTerakhir()
{
    return pendTerakhir;
}

// Set pendTerakhir
void Dosen::setPendTerakhir(string pendTerakhir)
{
    this->pendTerakhir = pendTerakhir;
}

string Dosen::getKeahlian()
{
    return fakultas;
}

// Set Fakultas
void Dosen::setKeahlian(string keahlian)
{
    this->keahlian = keahlian;
}

/* Destructor */
Dosen::~Dosen()
{
}

/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */
#include "Header.hh"

SivitasAkademik::SivitasAkademik() : Human()
{
}

SivitasAkademik::SivitasAkademik(int nik, string name, string gender, string asalUniv, string emailEdu)
    : Human(nik, name, gender)
{
    this->asalUniv = asalUniv;
    this->emailEdu = emailEdu;
}

string SivitasAkademik::getAsalUniv()
{
    return asalUniv;
}

void SivitasAkademik::setAsalUniv(string asalUniv)
{
    this->asalUniv = asalUniv;
}

string SivitasAkademik::getEmailEdu()
{
    return emailEdu;
}

void SivitasAkademik::setEmailEdu(string emailEdu)
{
    this->emailEdu = emailEdu;
}

SivitasAkademik::~SivitasAkademik()
{
}

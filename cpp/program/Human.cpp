/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

#include "Header.hh"
/* contructor */

Human::Human()
{
    nik = 0;
    name = "";
    gender = '-';
}

// constructor with parameter
Human::Human(int nik, string name, string gender)
{
    this->nik = nik;
    this->name = name;
    this->gender = gender;
}

/* Getter dan Setter*/

// Get NIK
int Human::getNik()
{
    return nik;
}

// set NIK
void Human::setNik(int nik)
{
    this->nik = nik;
}

// get name
string Human::getName()
{
    return name;
}

// set name
void Human::setName(string name)
{
    this->name = name;
}

// get gender
string Human::getGender()
{
    return gender;
}

// set gender
void Human::setGender(string gender)
{
    this->gender = gender;
}

/* Destructor */
Human::~Human()
{
}

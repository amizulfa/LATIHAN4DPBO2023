/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

#include "Header.hh"
/* contructor */

Course::Course()
{
}

// constructor with parameter
Course::Course(string namaMK)
{
    this->namaMK = namaMK;
}

/* Getter dan Setter*/

// get name
string Course::getNamaMK()
{
    return namaMK;
}

// set namaMK
void Course::setNamaMK(string namaMK)
{
    this->namaMK = namaMK;
}

Course::~Course()
{
}

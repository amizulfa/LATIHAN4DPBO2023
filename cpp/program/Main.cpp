/* Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin. */

#include "Header.hh"

int main()
{
    // hardcode Mahasiswa
    Mahasiswa mhs1 = Mahasiswa(191810, "Amida", "cewe", "UPI", "ami@upi.edu", 21011, "FPMIPA");
    Mahasiswa mhs2 = Mahasiswa(171810, "Zulfa", "cewe", "UPI", "zul@upi.edu", 22234, "FPMIPA");
    Mahasiswa mhs3 = Mahasiswa(141810, "Laila", "cewe", "UPI", "lai@upi.edu", 20031, "FPMIPA");
    Mahasiswa mhs4 = Mahasiswa(121810, "Chanyeol", "cowo", "UPI", "ceye@upi.edu", 19021, "FPMIPA");
    Mahasiswa mhs5 = Mahasiswa(101810, "Devano", "cowo", "UPI", "dev@upi.edu", 22092, "FPMIPA");

    // hardcode Dosen
    Dosen dsn1 = Dosen(122334, "Yono", "cowo", "UPI", "yono@upi.edu", 100982, "FPMIPA", "S3", "Pemrograman");
    Dosen dsn2 = Dosen(137564, "Asep", "cowo", "UPI", "asep@upi.edu", 150675, "FPMIPA", "S2", "AI");
    Dosen dsn3 = Dosen(122334, "Ruhiyah", "cewe", "UPI", "hiyah@upi.edu", 130678, "FPMIPA", "S1", "Metode Penelitian");
    Dosen dsn4 = Dosen(122334, "Gladis", "cewe", "UPI", "dis@upi.edu", 101243, "FPMIPA", "S3", "Basis Data");
    Dosen dsn5 = Dosen(122334, "Ijat", "cowo", "UPI", "jat@upi.edu", 123567, "FPMIPA", "S2", "Pemrograman");

    // hardcode Course
    Course cs1 = Course("Algoritma Pemrograman");
    Course cs2 = Course("Sistem Basis Data");
    Course cs3 = Course("Seminar Proposal");
    Course cs4 = Course("Kecerdasan Buatan");
    Course cs5 = Course("Struktur Data");

    // hardcode Prodi
    Prodi p1 = Prodi(202, "Ilmu Komputer", mhs1, dsn2, cs3);
    Prodi p2 = Prodi(230, "Teknik Elektro", mhs2, dsn1, cs1);
    p2.setMahasiswa(mhs3);
    p1.setMahasiswa(mhs4);
    p1.setMahasiswa(mhs5);
    p1.setDosen(dsn5);
    p2.setDosen(dsn3);
    p1.setDosen(dsn4);
    p1.setCourse(cs2);
    p1.setCourse(cs4);
    p2.setCourse(cs5);

    // list untuk menyimpan data prodi
    list<Prodi> listProdi;
    listProdi.push_back(p1);
    listProdi.push_back(p2);

    // output berisi kumpulan Mahasiswa, Dosen, dan Course yang berada pada program studi tertentu.
    for (Prodi prod : listProdi)
    {
        cout << "+-------------------Program Studi-------------------+" << '\n';
        cout << "|Nama Program Studi : " << prod.getNamaProdi() << '\n';
        cout << "|Kode Program Studi : " << prod.getKodeProdi() << '\n';
        int j = 0;
        cout << "          +-------------List Mahasiswa-------------+" << '\n';
        for (Mahasiswa m : prod.getMahasiswa())
        {
            cout << "          |" << (j + 1) << ". ";
            cout << "NIK                 : " << m.getNik() << '\n';
            cout << "          |   Nama                : " << m.getName() << '\n';
            cout << "          |   Jenis Kelamin       : " << m.getGender() << '\n';
            cout << "          |   Asal Universitas    : " << m.getAsalUniv() << '\n';
            cout << "          |   Email               : " << m.getEmailEdu() << '\n';
            cout << "          |   NIM                 : " << m.getNim() << '\n';
            cout << "          |   Fakultas            : " << m.getFakultas() << '\n';
            cout << "\n";
            j++;
        }
        cout << "          +-------------List Dosen-------------+" << '\n';
        int i = 0;
        for (Dosen d : prod.getDosen())
        {
            cout << "          |" << (i + 1) << ". ";
            cout << "NIK                 : " << d.getNik() << '\n';
            cout << "          |   Nama                : " << d.getName() << '\n';
            cout << "          |   Jenis Kelamin       : " << d.getGender() << '\n';
            cout << "          |   Asal Universitas    : " << d.getAsalUniv() << '\n';
            cout << "          |   Email               : " << d.getEmailEdu() << '\n';
            cout << "          |   NIP                 : " << d.getNip() << '\n';
            cout << "          |   Fakultas            : " << d.getFakultas() << '\n';
            cout << "          |   Pendidikan Terakhir : " << d.getPendTerakhir() << '\n';
            cout << "          |   Keahlian            : " << d.getKeahlian() << '\n';
            cout << "\n";
            i++;
        }
        cout << "          +-------------List Mata Kuliah-------------+" << '\n';
        int k = 0;
        for (Course c : prod.getCourse())
        {
            cout << "          |" << (k + 1) << ". ";
            cout << "Nama Mata Kuliah   : " << c.getNamaMK() << '\n';
            cout << "\n";
            k++;
        }
    }
}
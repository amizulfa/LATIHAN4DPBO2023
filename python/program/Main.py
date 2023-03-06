# Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.


from Mahasiswa import Mahasiswa
from Prodi import Prodi
from Dosen import Dosen 
from Course import Course 

# instantiation object class Mahasiswa
mhs1 = Mahasiswa()
mhs1.setNik(191810)
mhs1.setName("Amida")
mhs1.setGender("Perempuan")
mhs1.setAsal_univ("UPI")
mhs1.setEmail_edu("ami@upi.edu")
mhs1.setNim(21011)
mhs1.setFakultas("FPMIPA")

# instantiation object class Mahasiswa
mhs2 = Mahasiswa()
mhs2.setNik(171810)
mhs2.setName("Zulfa")
mhs2.setGender("Perempuan")
mhs2.setAsal_univ("UPI")
mhs2.setEmail_edu("zul@upi.edu")
mhs2.setNim(22234)
mhs2.setFakultas("FPMIPA")

# instantiation object class Mahasiswa
mhs3 = Mahasiswa()
mhs3.setNik(141810)
mhs3.setName("Laila")
mhs3.setGender("Perempuan")
mhs3.setAsal_univ("UPI")
mhs3.setEmail_edu("lai@upi.edu")
mhs3.setNim(20031)
mhs3.setFakultas("FPMIPA")

# instanstiation object class Course
cs1 = Course()
cs1.setNamaMatkul("Algoritma Pemrograman")

# instanstiation object class Course
cs2 = Course()
cs2.setNamaMatkul("Sistem Basis Data")

# instanstiation object class Course
cs3 = Course()
cs3.setNamaMatkul("Seminar Proposal")

# instanstiation object class Dosen
dsn1 = Dosen()
dsn1.setNik(122334)
dsn1.setName("Yono")
dsn1.setGender("Laki - laki")
dsn1.setAsal_univ("UPI")
dsn1.setEmail_edu("yono@upi.edu")
dsn1.setNip(100982)
dsn1.setFakultas("FPMIPA")
dsn1.setPendTerakhir("S3")
dsn1.setKeahlian("Pemrograman")

# instanstiation object class Dosen
dsn2 = Dosen()
dsn2.setNik(137564)
dsn2.setName("Asep")
dsn2.setGender("Laki - laki")
dsn2.setAsal_univ("UPI")
dsn2.setEmail_edu("asep@upi.edu")
dsn2.setNip(150675)
dsn2.setFakultas("FPMIPA")
dsn2.setPendTerakhir("S2")
dsn2.setKeahlian("AI")

# instanstiation object class Dosen
dsn3 = Dosen();
dsn3.setNik(122334)
dsn3.setName("Ruhiyah")
dsn3.setGender("Perempuan")
dsn3.setAsal_univ("UPI")
dsn3.setEmail_edu("hiyah@upi.edu")
dsn3.setNip(130678)
dsn3.setFakultas("FPMIPA")
dsn3.setPendTerakhir("S1")
dsn3.setKeahlian("Metode Penelitian")

# instantiation object class Prodi
p1 = Prodi(mhs1, dsn2, cs3,202, "Ilmu Komputer",);
p1.setMhs(mhs2);
p1.setMhs(mhs3);
p1.setDsn(dsn1);
p1.setDsn(dsn3);
p1.setCourses(cs2);
p1.setCourses(cs1);

# keluaran atau output
print("============================================")
print("Program Studi        --", p1.getNamaProdi() + "--")
print("Kode Program Studi   --", p1.getKodeProdi(), "--")

print("============================================")
print("Daftar Mahasiswa Program Studi" , p1.getNamaProdi())
print("============================================")
i=1
for mahasiswa in p1.getMhs():
    print("- Mahasiswa " + str(i))
    print("Nama Mahasiswa         :" , mahasiswa.getName())
    print("NIM                    :" , mahasiswa.getNim())
    print("Fakultas               :" , mahasiswa.getFakultas())
    print("Jenis Kelamin          :" , mahasiswa.getGender())
    print("Email                  :" , mahasiswa.getEmail_edu())
    print("Asal Universitas       :" , mahasiswa.getAsal_univ() + '\n')
    i = i+1
print("============================================"+'\n')

print("===========================================")
print("Daftar Dosen di Program Studi" , p1.getNamaProdi())
print("===========================================")
i=1
for dosen in p1.getDsn():
    print("- Dosen " + str(i))
    print("Nama Dosen             :" , dosen.getName())
    print("NIP                    :",dosen.getNip())
    print("Fakultas               :",dosen.getFakultas())
    print("Keahlian               :",dosen.getKeahlian())
    print("Jenis Kelamin          :",dosen.getGender())
    print("Email                  :",dosen.getEmail_edu())
    print("Asal Universitas       :",dosen.getAsal_univ() + '\n')
    i = i+1
print("==========================================="+'\n')

print("==============================================")
print("Daftar Mata Kuliah Program Studi" , p1.getNamaProdi())
print("=============================================="+'\n')
i=1
for course in p1.getCourses():
    print("- Mata Kuliah " + str(i))
    print("Nama Mata Kuliah         :", course.getNamaMatkul())
    print("Kode Mata Kuliah         :" , mahasiswa.getNim(), '\n')
    i = i+1
print("=============================================="+'\n')




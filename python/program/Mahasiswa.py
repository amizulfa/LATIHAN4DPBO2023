# Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

from SivitasAkademik import SivitasAkademik

# class declaration, class Mahasiswa sebagai cucu dari class Human 
# dan anak dari Class Sivitas Akademik
class Mahasiswa(SivitasAkademik):
    
    # Private attributes
    __nim=0
    __fakultas=""

    # contructor 
    def __init__(self,nik=0,name="",gender="",asalUniv="",emailEdu="",nim=0,fakultas=""):
        super().__init__(nik,name,gender,asalUniv,emailEdu)
        self.__nim = nim
        self.__fakultas = fakultas

    #Getter dan Setter

    # Get nim
    def getNim(self):
        return self.__nim
    
    # set nim
    def setNim(self, nim):
        self.__nim = nim
    
    # get fakultas
    def getFakultas(self):
        return self.__fakultas
    
    # set fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas
    

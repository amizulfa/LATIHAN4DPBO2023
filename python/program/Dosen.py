# Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

from SivitasAkademik import SivitasAkademik

# class declaration, class Dosen sebagai cucu dari class Human 
# dan anak dari Class Sivitas Akademik
class Dosen(SivitasAkademik):
    
    # Private attributes
    __nip=0
    __fakultas=""
    __pendTerakhir=""
    __keahlian=""

    # contructor 
    def __init__(self,nik=0,name="",gender="",asalUniv="",emailEdu="",nip=0,fakultas="",pendTerakhir="",keahlian=""):
        super().__init__(nik,name,gender,asalUniv,emailEdu)
        self.__nip = nip
        self.__fakultas = fakultas
        self.__pendTerakhir = pendTerakhir
        self.__keahlian = keahlian

    #Getter dan Setter

    # Get nip
    def getNip(self):
        return self.__nip
    
    # set nip
    def setNip(self, nip):
        self.__nip = nip
    
    # get fakultas
    def getFakultas(self):
        return self.__fakultas
    
    # set fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas
        
    # get pendidikan terakhir
    def getPendTerakhir(self):
        return self.__pendTerakhir
    
    # set pendidikan terakhir
    def setPendTerakhir(self, pendTerakhir):
        
        self.__pendTerakhir = pendTerakhir
        
    # get keahlian
    def getKeahlian(self):
        return self.__keahlian
    
    # set keahlian
    def setKeahlian(self, keahlian):
        self.__keahlian = keahlian
    

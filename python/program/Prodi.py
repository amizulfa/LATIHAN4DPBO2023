# Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

class Prodi():
    
    # Private attributes
    __namaProdi=""
    __kodeProdi=0
    __mhs=[]    #composite dari class Mahasiswa
    __dosen=[]  # composite dari class Dosen
    __course=[] # composite dari class course

    # contructor 
    def __init__(self,mhs, dosen,course,kodeProdi=0,namaProdi=""):
        self.__namaProdi = namaProdi
        self.__kodeProdi = kodeProdi
        self.__mhs.append(mhs)
        self.__dosen.append(dosen)
        self.__course.append(course)

    #Getter dan Setter

    # get NamaProdi
    def getNamaProdi(self):
        return self.__namaProdi
    
    # set NamaProdi
    def setNamaProdi(self, namaProdi):
        self.__namaProdi = namaProdi
        
    # get kodeProdi
    def getKodeProdi(self):
        return self.__kodeProdi
    
    # set kodeProdi
    def setKodeProdi(self, kodeProdi):
        self.__kodeProdi = kodeProdi
        
    # get Mahasiswa list
    def getMhs(self):
        return self.__mhs
    
    # set Mahasiswa list
    def setMhs(self, mhs):
        self.__mhs.append(mhs)
        
    # get Dosen list
    def getDsn(self):
        return self.__dosen
    
    # set Dosen list
    def setDsn(self, dosen):
        
        self.__dosen.append(dosen)
        
    # get Course list
    def getCourses(self):
        return self.__course
    
    # set Course list
    def setCourses(self, course):
        
        self.__course.append(course)
    

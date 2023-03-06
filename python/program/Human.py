# Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

# class declaration
class Human:
    
    # Private attributes
    __nik=0
    __name=""
    __gender=""

    # contructor 
    def __init__(self,nik=0,name="",gender=""):
        self.__nik = nik
        self.__name = name
        self.__gender = gender

    # Getter dan Setter

    # Get NIK
    def getNik(self):
        return self.__nik
    
    # set NIK
    def setNik(self, nik):
        self.__nik = nik
    
    # Get Name
    def getName(self):
        return self.__name
    
    # set name
    def setName(self, name):
        self.__name = name
    
    # get gender
    def getGender(self):
        return self.__gender
    
    # set gender
    def setGender(self, gender):
        self.__gender = gender
    

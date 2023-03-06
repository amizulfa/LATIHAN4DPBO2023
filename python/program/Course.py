# Saya Amida Zulfa Laila NIM 2101147 mengerjakan Latihan Praktikum 4
# dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka
# saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

# class declaration
class Course:
    
    # Private attributes
    __namaMatkul=""

    # contructor 
    def __init__(self,namaMatkul=""):
        self.__namaMatkul = namaMatkul

    # Getter dan Setter
    
    # Get namaMatkul
    def getNamaMatkul(self):
        return self.__namaMatkul
    
    # set namaMatkul
    def setNamaMatkul(self, namaMatkul):
        self.__namaMatkul = namaMatkul
    
    

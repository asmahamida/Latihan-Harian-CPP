#**kwargs
#**kwargs = keyword argumen tanpa jml tetap
#tipe= dictionary -> dipake kalo parameter fleksibel, gatau brp

def data(**mahasiswa):
    for key, value in mahasiswa.items():
        print(key, ":", value)
data(nama="asma", umur = 17, jrsn="informatika")
#key = nama argumen
#value = nilai argumen


#SCOPE -> a variable 

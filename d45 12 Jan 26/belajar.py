#FUNCTION
def my_function(name): # name is a parameter
  print("Hello", name)

#declaration
my_function("Emil") # "Emil" is an argument

def my_function(name, /):
  print("Hello", name)
my_function("emil")

#*args and **kwargs -> allow func to accept a unknown number of arguments
#args bisa bikin fungsi dengan parameter tdk ditentukan jumlahnya. args buat tuple
#*args = argumen tanpa jumlah tetap

def func(*args):
  print("type:", type(args))
  print("first:", args[0])
  print("scnd:", args[1])
  print("all:", args)

func("siti", "esti")

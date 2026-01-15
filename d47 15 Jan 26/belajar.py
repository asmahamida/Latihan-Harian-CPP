#SCOPE -> cakupan sebuah variabel bisa dikenali

#local scope (inside function)

#global scope (main body)

x = 300
def func():
    x = 200
    print(x)

func() #local scope x
print(x) #global scope x

print(".")

#global keyword
x = 200
def myfunc():
    global x
    x = 300
myfunc()
print(x) #cuma print 1, krn jadi global di fungsi

#nonlocal keyword -> ada di nested func
#intinya harus setara kalo mau dipanggil variabelnya

#LEGB RULE!
#Local - Inside the current function
#Enclosing - Inside enclosing functions (from inner to outer)
#Global - At the top level of the module
#Built-in - In Python's built-in namespace


x = "global" 
def outer():
    x = "enclosing"
    def inner():
        x = "local"
        print("inner:", x)
    inner()
    print("outer:", x)

outer()
print("Global:", x)
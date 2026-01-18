#decorators

#basic decorators
def changecase(func):
    def myinner():
        return func().upper()
    return myinner

@changecase
def myfunction():
    return "Hello"

print(myfunction())

#GANGERTI INI APH
#KITA SKIP YA BAHAS FUNC


#range
#range(start, stop, step)
x = range(2, 10, 2)
print(list(x)) #[2, 4, 6, 8]
print(3 in x) #false -> boolean

print(list(range(5))) #[0, 1, 2, 3, 4]
print(list(range(1, 6))) #[0, 1, 2, 3, 4]
print(list(range(5, 20, 3))) #[5, 8, 11, 14, 17]

r = range(10)
print(r[2]) #2
print(r[:2]) #range(0, 2)


#iterators
#tuple
mytuple = ("apple", "banana", "cherry") 
myit = iter(mytuple)
print(next(myit)) #apple
print(next(myit)) #banana
print(next(myit)) #cherry
#kalo dilanjut lagi, error

#string
mystr = "banana"
myit = iter(mystr)
print(next(myit)) #b
print(bool("Hello"))
print(bool(15))
a = 0 #Every number is true exept 0
print(bool(a))
print(bool(None)) #false

class myclass(): 
    def __len__(self):
        return 0
    
myobj = myclass()
print(bool(myobj))

def myFunction():
    return True
print(myFunction())

if myFunction():
    print("YES!")
else:
    print("NO!")
#YES!

x = 200
print(isinstance(x, int))

numbers = [1, 2, 3, 4, 5]
count = len(numbers)
if count > 3:
    print(f"list has {count} elements")

if(count := len(numbers)) > 3:
    print(f"list has {count} elements")

x = ["apple", "pear"]
y = ["pear"]
z = ["banana"]
print(x is not y)
print("apple" in x)
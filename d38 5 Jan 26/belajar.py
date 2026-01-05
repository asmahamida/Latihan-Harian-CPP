thislist = ["apple", "banana", "cherry"]

print(thislist)

i = 0
while i < len(thislist):
    print(thislist[i])
    i = i + 1

[print(x) for x in thislist]

newlist = [x for x in thislist if x != "apple"] #bikin list baru yg gaada apple nya
print(newlist)

newlist = [x for x in range(10)]
print(newlist) #[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

newlist = [x for x in range(10) if x < 5]
print(newlist)

thislist = ["banana", "apple", "cherry"]
thislist.sort() #sort alphanumerically (numeric = ascending)
print(thislist) #capital letters sensitively

number = [10, 3, 4, 20, 35]
number.sort(reverse=True) #sort descending
print(number)

def myfunc(n):
    return abs(n-50)

thislist = [100, 50, 65, 82, 23]
thislist.sort(key = myfunc) #?????
print(thislist)

thislist = ["apple", "banana", "cherry"]
mylist = thislist.copy() #copy
print(mylist)
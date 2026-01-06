#Tuple

mytuple = ("apple", "banana", "cherry")
print(mytuple)
print(len(mytuple))
print(type(mytuple))

#NOT TUPLE BUT STR
thistuple = ("apple")
print(type(thistuple))

thistuple = ("apple", "banana", "cherry")
print(thistuple[1]) #banana

#negative indexing
print(thistuple[-1]) #cherry

#add items
thistuple = ("apple", "banana", "cherry")
y = list(thistuple)
y.append("orange")
thistuple = tuple(y)
print(thistuple) #('apple', 'banana', 'cherry', 'orange')

#add tuple to tuple
thistuple = ("apple", "banana", "cherry")
y = ("orange",) #JJANGAN LUPA KOMAA
thistuple += y
print(thistuple) #('apple', 'banana', 'cherry', 'orange')

#unpacking tuple
fruits = ("apple", "banana", "cherry")
(green, yellow, red) = fruits
print(green) #apple
print(yellow) #banana
print(red) #cherry

(green, yellow, *red) = fruits
print(red) #['cherry']

#multiply tuples
fruits = ("apple", "banana", "cherry")
mytuple = fruits * 2
print(mytuple)


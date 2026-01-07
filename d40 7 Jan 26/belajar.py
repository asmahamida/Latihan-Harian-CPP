#SET {} //unordered, unchangeable, not allow duplicates

myset = {"apple", "banana", "cherry"}
print(myset)
print(type(myset))

#add items
myset.add("orange")
print(myset)

#add set to set
thisset = {"apple", "banana", "cherry"}
tropical = {"pineapple", "mango", "papaya"}
thisset.update(tropical)
print(thisset)

#remove item
# remove() or discard()

#JOIN SETS

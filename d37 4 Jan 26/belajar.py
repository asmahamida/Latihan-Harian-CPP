#Jenis Array dalam Python
#LIST (ordered, changeable, allow duplicate values)

thislist = ["apple", "mango", "cherry"]
tropical = ["pinapple", "papaya", "pear"]

thislist.insert(1, "watermelon")
print(thislist) # ['apple', 'watermelon', 'mango', 'cherry']

thislist.append("apple")
print(thislist) #['apple', 'watermelon', 'mango', 'cherry', 'apple']

thislist.extend(tropical)
print(thislist) #['apple', 'watermelon', 'mango', 'cherry', 'apple', 'pinapple', 'papaya', 'pear']

thislist = ["apple", "mango", "cherry"]
thislist.remove("mango")
print(thislist) #['apple', 'cherry']

#remove specific index
thislist.pop(1) #del keyword also removes the specific index ex. del thislist[0]
print(thislist) #['apple']

thislist = ["apple", "banana", "cherry"]
thislist.clear()
print(thislist) #[]
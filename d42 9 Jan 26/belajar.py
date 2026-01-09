#DICTIONARIES
#ordered, changeable, do not allow duplicates

thisdict = {
    "brand" : "ford",
    "model" : "mustang",
    "year" : 1964,
    "colors" : ["red", "white", "blue"]
}
print(thisdict)
print(len(thisdict))

#also this to make dict
thisdict = dict(name = "john", age = 36, country = "norway")
print(thisdict)

#access
print(thisdict["age"])
x = thisdict.get("model")
print(x)

#change
thisdict["age"] = 20
print(thisdict["age"])

#check if exist
if "name" in thisdict:
    print("Yes")
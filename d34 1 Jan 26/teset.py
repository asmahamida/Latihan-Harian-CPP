txt = "the best things in life is free"
if "free" in txt:
    print("Yes, 'free' is present.")
if "love" not in txt:
    print("Yes, 'love' is not in txt")

b = "Hello world!"
print(b[2:5]) #llo
print(b[:5])  #Hello
print(b[2:])  #llo world!
print(b[-5:-2])  #???? MASI BINGUNG

print(b.upper())  #Uppercase
print(b.lower()) #lowercase

print(b.replace("H", "J"))  #Jello world!
print(b.split(","))  #['Hello world!']

a = "Hello"
b = "World"
c = a + b #gaakan ada spasi
print(c)

#kita gabisa combine number and string

#f string
age = 36
txt = f"My name is John, I am {age}"
print(txt)

price = 59
txt = f"The price is {price:.3f} dollars"
print(txt) #The price is 59.000 dollars
  
#txt = "We are the so-called "Vikings" from the north."    #bakal errorr!
txt = "We are the so-called \"Vikings\" from the north."
print(txt)


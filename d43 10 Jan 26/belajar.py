a = 33
b = 33
if b > a:
  print("b is greater than a")
elif a == b:
  print("a and b are equal")

score = 10
if score >= 90:
  print("Grade: A")
elif score >= 80:
  print("Grade: B")
elif score >= 70:
  print("Grade: C")
elif score >= 60:
  print("Grade: D")
else:
  print("Grade : E")

#Shhort vers
a = 2
b = 330
print("A") if a > b else print("B")

x = 15
y = 20
max_value = x if x > y else y
print("Maximum value:", max_value)

#and, or, not
age = 25
is_student = False
has_discount_code = True
if (age < 18 or age > 65) and not is_student or has_discount_code:
  print("Discount applies!")

#pass statement
a = 33
b = 200
if b > a:
  pass #null op, gaada apa-apa
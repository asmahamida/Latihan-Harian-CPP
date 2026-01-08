#JOIN SETS

#union() and update()
set1= {"a", "b","c"}
set2 = {1,2,3}
set3 = set1.union(set2)
set4 = set1 | set2
print(set3) 
print(set4)

#intersection (KEEP ONLY DUPLICATES)
set1 = {"apple", "banana", "cherry"}
set2 = {"google", "microsoft", "apple"}
set3 = set1.intersection(set2)
set4 = set1 & set2
print(set3) #{'apple'}
print(set4)

#difference
set1 = {"apple", "banana", "cherry"}
set2 = {"google", "microsoft", "apple"}
set3 = set1.difference(set2)
set4 = set1 - set2
set5 = set2 - set1
print(set3)
print(set4)
print(set5)

#symmetric_difference()
set1 = {"apple", "banana", "cherry"}
set2 = {"google", "microsoft", "apple"}
set3 = set1.symmetric_difference(set2)
set4 = set1 ^ set2
print(set3)
print(set4)
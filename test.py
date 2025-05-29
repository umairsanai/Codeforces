import os
os.system("cls")

def average(list):
    sum = 0
    for i in list: 
        sum += i
    return sum/len(list)

val = [-1.3, 1.6, 1.3, 3.1, 2.7, 1.6]
S = 0
X = average(val)
for i in val:
    S += (X-i)**2
S /= (len(val)-1)

print("Variance: ", S)
print("Average: ", X)


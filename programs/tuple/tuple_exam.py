kim = ("Kim DukBae", 80, 85, 90)

print(kim)

print(kim[0])
print(kim[1])

# kim[1] = 85   # Error

def get_total_average(student):
    total = student[1] + student[2] + student[3]
    average = total/3
    return total, average

result = get_total_average(kim)

print(result)
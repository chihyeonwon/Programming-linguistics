y_1 = [x for x in range(1, 11) if x % 2 == 0]
y_2 = [2 * x for x in range(1, 11) if x % 2 == 0]

print(y_1)
print(y_2)

y_3 = {x ** 2 for x in range(1, 11)}

print(y_3)

students = {"dennis": 23, "david": 21, "mary": 9, "daniel": 25, "darius": 17, "jim": 10, "marvin": 8}
upper_case_names = {key.upper(): value for key, value in students.items()}

print(upper_case_names)
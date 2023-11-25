players = {"최동원": "야구", "차범근": "축구", "홍수환": "권투"}

print(players)
print(players["최동원"])

sports = {1: "축구", 2: "야구", 3: "권투"}

print(sports)
print(sports[1])

# error_dict = {["최동원", "차범근", "홍수환"]: ["야구", "축구", "권투"],
#               ["손흥민", "이강인", "류현진"]: ["축구", "축구", "야구"] }

# print(error_dict)

name = "Kim DukBae"
kor = 80
eng = 85
math = 90

kim_list = ["Kim DukBae", 80, 85, 90]
kim_dict = {"name": "Kim DukBae", "kor": 80, "eng": 85, "math": 80}

print(name, kim_list[0], kim_dict["name"])
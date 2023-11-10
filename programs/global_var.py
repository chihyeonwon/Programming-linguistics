var = 3

def func1():
    print(var)

def func2():
    global var
    var = 5
    print(var)

func1()
func2()

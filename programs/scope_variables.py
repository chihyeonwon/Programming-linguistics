x = 1               # Global Scope

def big():
    x = 2           # Enclosed Scope
    def sub1():
        x = 3       # Local Scope
        sub2()
        print(x)

    def sub2():
        y = x
        print(x)

    sub1()
    print(x)

big()

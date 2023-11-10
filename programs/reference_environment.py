g = 3   # A global

def sub1():
    a = 5           # Create a local
    b = 7           # Create another local
    print(g, a, b)      # <--------- 1

def sub2():
    global g    # Global g is now assignable here
    c = 9       # Create a new local
    print(g, c)         # <--------- 2

    def sub3():
        nonlocal c  # Make nonlocal c visible here
        g = 11;     # Create a new local
        print(g, c)     # <--------- 3

    return sub3

sub1()
r_sub3 =sub2()
r_sub3()

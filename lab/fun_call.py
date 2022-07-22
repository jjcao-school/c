############################
# function call
############################
def doPrint():
    print("In doPrint()")

print("Starting main()")
doPrint()
print("Ending main()")

############################
# type of return values
############################
def ret1():
    def nested_fun():
        return 2, 3
    nested_fun()
    return 2

def ret2():
    return 2, 'ok'
#     return 2, 3

print(type(ret1()))
print(type(ret2()))
print(ret2())

############################
# 默认参数和关键参数
############################
def printinfo( name, age=50 ):
   print("name: {}; age: {}".format(name, age))

printinfo( age=50, name="miki" )
printinfo( "miki", age=50 )
#printinfo( age=50, "miki" )

############################
# 可变长参数
############################
def printinfo_varl( arg1, *vartuple ):
#"This prints a variable passed arguments"
    print("Output is: ")
    print(arg1)
    for var in vartuple:
        print(var)
printinfo_varl( 10 )
printinfo_varl( 70, 60, 50 )

############################
# 模拟overloading in Python
############################
def myfunct(n, m=None):
    if m is None:
        print("1 parameter: " + str(n))
    else:
        print("2 parameters: " + str(n), end="")
        print(" and ", str(m))

myfunct(4)
myfunct(5, 6)
    
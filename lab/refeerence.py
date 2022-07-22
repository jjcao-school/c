def swap2(a, b):
    tmp = a
    a = b
    b = tmp
def swap1(a):
    tmp = a[0]
    a[0] = a[1]
    a[1] = tmp

n1 =1; n2=2
swap2(n1,n2)
print("{}, {}".format(n1, n2))
li1 = [n1,n2]
swap1(li1)
print(li1)
"""Demonstrates how python protects from iterating past the end of a list"""
def mylist():
    mylist = []
    # mylist = [6, 8]
    # mylist = list(range(2))
    mylist.append(1)
    mylist.append(2)
    for x in mylist:
        print(x)

    list2 = [1, 2, 3, 4, 5, 6, 7 ]
    print(list2[1:5])#[2, 3, 4, 5]

    list = ['physics', 'chemistry', 1997, 2000]
    print(list[1]) #Value available at index 2
    list[1] = 2001 # update its value
    print(list[1]) # 2001
    del list[1]
    print(list) #['physics', 1997, 2000]

    L = ['spam', 'Spam', 'SPAM!']
    print(L[-2])

    for i in range(8):
        print(mylist[i])

mylist()
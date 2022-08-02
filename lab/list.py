def create():
    colors = ["red", "yellow", "green", "blue"]
    type(colors)#<class 'list'>

    list("Python")#['P', 'y', 't', 'h', 'o', 'n']

    groceries = "eggs, milk, cheese"
    grocery_list = groceries.split(", ")
    print(grocery_list) #['eggs', 'milk', 'cheese']

    "The quick brown fox".split(" ")
    "abbaabba".split("ba")
    "abbaabba".split("c")

def operate():
    numbers = [1, 2, 3, 4]
    numbers[1]
    numbers[1:3]#[2, 3], 左闭右开区间[)
    "Bob" in numbers #False
    for number in numbers:
        if number % 2 == 0:
            print(number)

def change():
    colors = ["red", "yellow", "green", "blue"]
    colors[0] = "burgundy"
    colors[1:3] = ["orange", "magenta"]#['burgundy', 'orange', 'magenta', 'blue']

def insert():
    #Adding and Removing Elements
    colors = ["red", "yellow", "green", "blue"]
    colors.insert(1, "orange") #['red', 'orange', 'yellow', 'green', 'blue']
    colors.insert(-1, "indigo") #['red', 'orange', 'yellow', 'green', "indigo", 'blue']
    print(colors)

    color = colors.pop(3)
    print(color) #'green'
    print(colors) # ['red', 'orange', 'yellow', "indigo", 'blue']

    colors.append("green")#['red', 'orange', 'yellow', "indigo", 'blue', 'green']

def num():
    numbers = [1, 2, 3, 4, 5]
    sum(numbers)
    min(numbers)
    squares = [num**2 for num in numbers]
    print(squares)

    str_numbers = ["1.5", "2.3", "5.25"]
    float_numbers = [float(value) for value in str_numbers]

num()
change()

arr = []
arr2 = [1, 2]
arr2.append(3)
arr2.pop(1)
print(arr2)

# arr = [1, "hello", 'c', 3.14]
# arr[0]=2;arr[1]=3;arr[2]=1;arr[3]=9
# print(arr)

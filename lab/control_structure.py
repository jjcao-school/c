grade = 55
if (grade < 60):
    print('F')
elif (grade < 70):
    print('D')
elif grade < 80:
    print('C')
elif grade < 90:
    print('B')
else:
    print('A')

count = 0
while count < 5:
    print(count)
    count += 1  # This is the same as count = count + 1

count = 0
while True:
    print(count)
    count += 1
    if count >= 5:
        break

primes = [2, 3, 5, 7] # define a list
for prime in primes:
    print(prime)

# Prints out the numbers 0,1,2,3,4
for x in range(5):
    print(x)

# Prints out 3,4,5
for x in range(3, 6):
    print(x)

fruits = ['banana', 'apple',  'mango']
for index in range(len(fruits)):
   print('Current fruit :', fruits[index])
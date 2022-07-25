import time

sum = 0; add = 1

start = time.time()
iterations = 1000*1000*100
for i in range(iterations):
    sum += add
    add /= 2.0

end = time.time()
print("Python for Time measured: {} seconds".format(end - start))

i=0
start = time.time()
iterations = 1000*1000*100
while i < iterations:
    sum += add
    add /= 2.0
    i+=1

end = time.time()
print("Python while Time measured: {} seconds".format(end - start))
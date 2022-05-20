from pickle import TRUE


toReach = 100000  # 100,000
for i in range(2, toReach):
    isPrime = True
    for j in range(2, i):
        if i % j == 0:
            isPrime = False
    if isPrime == True:
        print(i)

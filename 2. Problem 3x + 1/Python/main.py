targetNumber = 5000
for i in range(10, targetNumber + 1):
    print("==========", i, "==========")
    j = i
    while (j > 2):
        if (j % 2 == 0):
            j //= 2
            print(j)
        else:
            j = 3 * j + 1
            print(j)
    print(j // 2)


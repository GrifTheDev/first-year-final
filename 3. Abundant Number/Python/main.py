for i in range(1, 100000+1):
    zbrojDjelitelja=0
    for j in range(1, i+1):
        if i%j==0:
            zbrojDjelitelja+=j
    if i<zbrojDjelitelja:
        print(i)
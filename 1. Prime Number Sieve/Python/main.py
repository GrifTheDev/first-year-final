for i in range(2, 100000+1):
     zbroj=0
     for j in range(2, i):
          if i%j==0:
               zbroj+=1
     if zbroj==0:
          print(i)

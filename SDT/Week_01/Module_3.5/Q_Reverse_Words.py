line = input()

   
reversed_words = [word[::-1] for word in line.split(" ")]

  
print(" ".join(reversed_words))
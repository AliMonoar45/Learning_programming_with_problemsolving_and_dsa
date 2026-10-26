# .csv comma separated value

# .txt text file

# with open("file.txt", 'w') as file:
#     file.write("Hello World")
# for i in range(0,3):
    # with open("file.txt", 'a') as file:
    #     file.write("\n I love programming")

with open("file.txt", 'r') as file:
    content = file.read()
    print(content)
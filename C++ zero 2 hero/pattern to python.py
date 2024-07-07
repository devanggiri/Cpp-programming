n = int(input("Enter a number: "))

for i in range(1, n + 1):  # rows
    for j in range(1, n + 1):  # columns
        print(i, end=' ')  # use end=' ' to keep on the same line
    print()  # move to the next line
      
  
        
n = int(input("Enter a number: "))

i = 1

while i <= n:  # rows
    j = 1
    while j <= n:  # columns
        print(j, end=' ')  # use end=' ' to keep on the same line
        j = j + 1
    print()  # move to the next line
    i = i + 1



n = int(input("Enter a number: "))

count = 1

print(n)  # Print the size of the grid

for i in range(1, n + 1):  # Iterate over the rows
    for j in range(1, n + 1):  # Iterate over the columns
        print(count, end=' ')
        count += 1
    print()  # Move to the next line


n = int(input())
row =1

while (row<=n):
    pat = row
    col =1
    while(col<=row):
        print(pat, end =" ")
        pat +=1
        col +=1
    row+=1
    print()

#
list=[]
n=int(input("Enter the size of list:"))
for i in range(n):
    num=int(input(f"Enter {i+1} the number: "))
    list.append(num)
    total=total+list[i]
print(list)
print("The sum ")
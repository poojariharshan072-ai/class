age=int(input("enter the age:"))
day=input("enter the day:")
timing=input("enter the show time[morning/afternoon/evening]:")

ticket_price=250
is_weekday =("monday","tuesday","wednesday","thursday","firday")
is_weekend =("saturday","sunday")
if day=="sunday" or "saturday":
    ticket_price=ticket_price*25//100
else:
    ticket_price=ticket_price
if 'timing'=='morning':
    ticket_price=ticket_price
elif 'timing'=='afternoon':
    ticket_price=ticket_price *10//100  
else :
    ticket_price=ticket_price *30//100        

if age<5:
    ticket_price=ticket_price*50//100
elif age>60:
    ticket_price=ticket_price*90//100
else:
    ticket_price=ticket_price

print("final ticket price:",ticket_price) 

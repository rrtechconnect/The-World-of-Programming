#If the bill was $150.00, split between 5 people, with 12% tip. 

#Each person should pay (150.00 / 5) * 1.12 = 33.6
#Format the result to 2 decimal places = 33.60

#Tip: There are 2 ways to round a number. You might have to do some Googling to solve this.💪

print("Welcome to the tip calculator")
bill = float(input("what was the total bill in $?"))
tip = int(input("How much tip would you like to give? 10, 15, 20?)"))
people = int(input("how many people to split the bill?"))
tip_as_percent = tip/100
total_tip_amount = bill * tip_as_percent
total_bill_amount = bill + total_tip_amount
bill_per_person = total_bill_amount/people
final_bill_amount = round(bill_per_person,2)
#final_bill_amount = "{:.2f}".format(bill_per_person)
print(f"Each pershould pay:S{final_bill_amount}")

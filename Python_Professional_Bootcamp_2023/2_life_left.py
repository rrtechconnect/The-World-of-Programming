age = input("What is your current age? ")
#total_no_of_days = 90*365
#total_no_of_weeks = 90*52
#total_no_of_months = 90*12
tnd = 90*365
tnw = 90*52
tnm = 90*12
tndLeft = tnd - (int(age)*365)
tnwLeft = tnw - (int(age)* 52)
tnmLeft = tnm - (int(age)* 12)
print(f"You have {tndLeft} days, {tnwLeft} weeks, and {tnmLeft} months left.")

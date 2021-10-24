yearAge = int(input("Enter your age/year of birth:\n"))
isAge = False
isYear = False

if yearAge < 125:
    isAge = True

elif yearAge > 1900:
    isYear = True

else:
    print("There was some problem with your age/year of birth!")
    exit()

if yearAge <1900 and isYear:
    print("You seem to be the oldest person alive!")
    exit()

if yearAge > 2020 and isYear:
    print("You are not yet born!")
    exit()

if isAge:
    yearAge = 2020 - yearAge

print(f"You will be 100 years old in {yearAge + 100}")

interestedYear = int(input("\nEnter the year you want to know your age in:\n"))

print(f"You will be {interestedYear - yearAge} year old in {interestedYear}")

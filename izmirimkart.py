cardno = [""]*13
sumofcard = 0
cardno = input()
for i in range (0, 11):
    if (i != 5):
        sumofcard += int(cardno[i])
print(sumofcard)
if (sumofcard % 10 == int(cardno[12]) % 10):
    print("the card no is valid")
else:
    print("the card no is invalid\a")

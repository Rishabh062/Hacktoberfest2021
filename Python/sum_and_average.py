input_num = 0
total = 0.0
while True:
    while True:
        number = input("Enter a number : ")
        if number == 'done':
            break
        try :
            input_num1 = float(number)
        except:
            print('Invalid Input')
            continue
        input_num = input_num+1
        total = total + input_num1
        avg = total / input_num
    print ('all done')
    print ("Num : ",input_num)
    print("Total : ",total)
    print("Average : ",avg)
    print("\n")

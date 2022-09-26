strats = 1
while strats == 1 :
    print('''choose what type do you want to calculate 
plus = 1 minus = 2 divide = 3 multiply = 4 Endwork = 5 ''') 
    X = int(input())
    if X == 1 :
        print('frist data:')
        input1 = int(input())
        print('second data:')
        input2 = int(input())
        plus = input1+input2
        print(plus)
    elif X == 2 :
        print('frist data:')
        input1 = int(input())
        print('second data:')
        input2 = int(input())
        minus = input1-input2
        print(minus)
    elif X == 3 :
        print('frist data:')
        input1 = int(input())
        print('second data:')
        input2 = int(input())
        divide = input1/input2
        print(divide)
    elif X == 4 :
        print('frist data:')
        input1 = int(input())
        print('second data:')
        input2 = int(input())
        multiply = input1*input2
        print(multiply)
    elif X == 5:
        break
    else :
        print('error')

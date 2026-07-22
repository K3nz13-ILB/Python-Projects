num1 = input('Input first number: ')
num2 = input('Input second number: ')
op = input('Input operation(add,sub,div,mul): ')

if op == 'add':
    sol = float(num1) + float(num2)
if op == 'sub':
    sol = float(num1) - float(num2)
if op == 'div':
    sol = float(num1) / float(num2)
if op == 'mul':
    sol = float(num1) * float(num2)

print(sol)
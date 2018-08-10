numeros = ''

frase = input('Digite a frase: ').upper()

for i in frase:
    if i == 'A' or i == 'B' or i == 'C':
        numeros = numeros + '2'
    elif i == 'D' or i == 'E' or i == 'F':
        numeros = numeros + '3'
    elif i == 'G' or i == 'H' or i == 'I':
        numeros = numeros + '4'
    elif i == 'J' or i == 'K' or i == 'L':
        numeros = numeros + '5'
    elif i == 'M' or i == 'N' or i == 'O':
        numeros = numeros + '6'
    elif i == 'P' or i == 'Q' or i == 'R' or i == 'S':
        numeros = numeros + '7'
    elif i == 'T' or i == 'U' or i == 'V':
        numeros = numeros + '8'
    elif i == 'W' or i == 'X' or i == 'Y' or i == 'Z':
        numeros = numeros + '9'
    else:
        numeros = numeros + i
                
print(numeros)
        

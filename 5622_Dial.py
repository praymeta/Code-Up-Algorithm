myDial = list(input())
time = 0
for dial in range(len(myDial)):
    if 65 <= ord(myDial[dial]) and ord(myDial[dial]) <= 67:
        time += 3
    elif 68 <= ord(myDial[dial]) and ord(myDial[dial]) <= 70:
        time += 4
    elif 71 <= ord(myDial[dial]) and ord(myDial[dial]) <= 73:
        time += 5
    elif 74 <= ord(myDial[dial]) and ord(myDial[dial]) <= 76:
        time += 6
    elif 77 <= ord(myDial[dial]) and ord(myDial[dial]) <= 79:
        time += 7
    elif 80 <= ord(myDial[dial]) and ord(myDial[dial]) <= 83:
        time += 8
    elif 84 <= ord(myDial[dial]) and ord(myDial[dial]) <= 86:
        time += 9
    else:
        time += 10
print(time)

croatian = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
alphabet = input()
for i in croatian:
    alphabet = alphabet.replace(i, '.')
print(len(alphabet))

croatia_word = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

word = input()

for croatia in croatia_word:
    word = word.replace(croatia, '*')

print(len(word))
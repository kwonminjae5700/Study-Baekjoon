croatia_word = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

word = input()
cnt = 0

i = 0
while i < len(word):
    if word[i:i+3] == 'dz=':  # 'dz=' 먼저 체크 (3글자)
        cnt += 1
        i += 3  # 'dz='는 한 글자로 취급
    elif word[i:i+2] in croatia_word:  # 2글자로 이루어진 크로아티아 문자 체크
        cnt += 1
        i += 2  # 한 글자로 취급
    else:
        cnt += 1
        i += 1  # 일반 문자

print(cnt)
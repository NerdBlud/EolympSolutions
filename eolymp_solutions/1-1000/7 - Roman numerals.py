ROMAN = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
VALS = [(1000,'M'), (900,'CM'), (500,'D'), (400,'CD'),
        (100,'C'), (90,'XC'), (50,'L'), (40,'XL'),
        (10,'X'), (9,'IX'), (5,'V'), (4,'IV'), (1,'I')]

def roman_to_int(s):
    total = 0
    prev = 0
    for c in reversed(s):
        total += ROMAN[c] if ROMAN[c] >= prev else -ROMAN[c]
        prev = ROMAN[c]
    return total

def int_to_roman(n):
    res = ''
    for val, r in VALS:
        res += r * (n // val)
        n %= val
    return res

a, b = input().split('+')
print(int_to_roman(roman_to_int(a) + roman_to_int(b)))

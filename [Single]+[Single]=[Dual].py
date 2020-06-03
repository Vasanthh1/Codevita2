from collections import Counter
def fun(s):
    if max(Counter(s).values())>1:
        return "Yes"
    return "No"

for _ in range(int(input())):
    print(fun(input()))
    
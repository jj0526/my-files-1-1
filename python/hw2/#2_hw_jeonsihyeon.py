x =  int(input('4자리 정수를 입력하세요:'))   #lets say x = 1357
num = []
for i in range(0,4):
    num.append(x%10)
    x = x//10
print(sum(num))
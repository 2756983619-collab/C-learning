num = int(input("請輸入一個數字："))

if num <= 1:
    print(num, "不是質數")
else:
    is_prime = True
    i = 2
    while i * i <= num:
        if num % i == 0:
            is_prime = False
            break
        i += 1

    if is_prime:
        print(num, "是質數")
    else:
        print(num, "不是質數")

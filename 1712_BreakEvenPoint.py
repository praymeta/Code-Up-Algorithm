fixCost, varCost, price = map(int, input().split())
if varCost >= price:
    print(-1)
else:
    print(fixCost//(price - varCost) + 1)

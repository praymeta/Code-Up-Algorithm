nums = list(map(int, input().split()))

def solution(nums):
    answer = 0
    myPokemon = []
    i = 0
    
    while len(myPokemon) != len(nums)/2:
        if myPokemon.count(nums[i]) == 0:
            myPokemon.append(nums[i])
        if i == len(nums)-1:
            break
        i += 1
            
    answer = len(myPokemon)
        
    return answer

answer = solution(nums)
print(answer)

# cook your dish here
from math import ceil

for _ in range(int(input())):
    num = int(input())
    
    weight = list(map(int, input().split())) 
    loo = list(map(int, input().split()))
    
    aoo=[0]*15
    
    boo = sorted(weight)
    
    count = 0
    
    if boo == weight:
        print(0)
        continue
    
    for i in range(num):
        aoo[i] = i
        
        
    if num==2:
        if weight[0]==1:
            print(0)
        else:
            print(ceil(2/loo[0]))
        continue

    for i in range(1, num):
    
        currentindex = weight.index(boo[i])
        
        prevnoindex = aoo[weight.index(boo[i-1])] 
        
        finalindex = currentindex
        
        while(finalindex <= prevnoindex):
            finalindex += loo[currentindex]
            aoo[currentindex] = finalindex
            count += 1
        
    print(count)
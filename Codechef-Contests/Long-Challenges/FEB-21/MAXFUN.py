# cook your dish here
T = int(input())
for _ in range(T):
    l = int(input())
    nums = list(map(int, input().split(' ')))
    maximum = max(nums)
    minimum = min(nums)
    print(2 * abs(maximum - minimum))
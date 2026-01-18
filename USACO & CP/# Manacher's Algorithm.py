# Manacher's Algorithm

def longestPalindrome(s):
    t = '#' + '#'.join(s) + '#'
    n = len(t)
    p = [0] * n
    right = center = maxCenter = 0

    for i in range(1, n):
        mirror = 2*center - i; 

        if i < right: 
            p[i] = min(right - i, p[mirror])

        while i - p[i] - 1 >= 0 and i + p[i] + 1 < n and t[i - p[i] - 1] == t[i + p[i] + 1]:
            p[i] += 1
        
        if i + p[i] > right:
            right = i + p[i]
            center = i 

        if p[i] > p[maxCenter]:
            maxCenter = i 
    
    start = (maxCenter - p[maxCenter]) // 2
    return s[start: start + p[maxCenter]]

print(longestPalindrome(input()))
        

    
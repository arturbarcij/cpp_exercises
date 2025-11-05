import sys

def main():
    input_data = sys.stdin.read().split()
    x = int(input_data[0])
    n = int(input_data[1])

    dp = [0] * (x + 1)

    index = 2
    for _ in range(n):
        cost = int(input_data[index])
        pages = int(input_data[index + 1])
        index += 2

        for c in range(x, cost - 1, - 1):
            dp[c] = max(dp[c], dp[c - cost] + pages)
            
    return dp[x]

if __name__ == "main":
    main()
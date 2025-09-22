import math

def QKnot():
    a, b, c = map(int, input().split())
    x = 22 * a * a * b * b * c * c
    y = 7 * (a + b + c) * (a + b - c) * (a + c - b) * (b + c - a)
    d = math.gcd(x, y)
    print(f"{x // d}/{y // d}")

def main():
    try:
        test = int(input())
        for _ in range(test):
            QKnot()
    except:
        QKnot()

if __name__ == "__main__":
    main()
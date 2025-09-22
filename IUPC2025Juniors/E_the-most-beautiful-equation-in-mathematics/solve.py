def main():
    test = int(input())
    for i in range(test):
        n = int(input())
        print(2 if n % 2 == 0 else 0)
if __name__ == "__main__":
    main()